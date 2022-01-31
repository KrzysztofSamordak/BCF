#include "Counter.h"
#include<QtDebug>

using std::filesystem::recursive_directory_iterator;
using std::filesystem::directory_iterator;

Counter::Counter()
{
   //qDebug() << "Number of threads" << QString::number(pool.get_thread_count());
}

bool Counter::chcekIfExist(std::string TargetLocation_tmp)                  //auxiliary method, used by Counter::SetTargetLocation method
{    
	bool return_val = false;
    if(std::filesystem::exists(TargetLocation_tmp))
	{
        if(std::filesystem::is_directory(TargetLocation_tmp))
		{
            return_val = true;

        }else
        {
            std::cout << "Target is not a directory!" << std::endl;
        }
    }else
    {
        std::cout << "Path do not exist!" << std::endl;
    }
	return return_val;
}

bool Counter::SetTargetLocation(std::string TargetLocation_tmp)
{
    bool return_val = false;
    if(chcekIfExist(TargetLocation_tmp))
	{
        TargetLocation = TargetLocation_tmp;
		return_val = true;
	}
	return return_val; 
}

int Counter::SearchForFilesInSubfolders()                      //search for files in Target location and its subfolders
{                                                               //Target location is set by Counter::SetTargetLocation method
    std::string tmp_path;
    FilesInFolderAndSubfolders.clear();
    for (const auto & file : recursive_directory_iterator(TargetLocation))
    {
        if(!(file.is_directory()))
		{
            tmp_path = file.path().string();
            FilesInFolderAndSubfolders.push_back(tmp_path);
		}
	}
    return FilesInFolderAndSubfolders.size();
}

int Counter::SearchForFilesInFolder()                          //search for files only in Target location
{                                                               //Target location is set by Counter::SetTargetLocation method
    std::string tmp_path;
    FilesInFolder.clear();
    for (const auto & file : directory_iterator(TargetLocation))
    {
        if(!(file.is_directory()))
        {
            tmp_path = file.path().string();
            FilesInFolder.push_back(tmp_path);
        }
    }
    return FilesInFolder.size();
}

void Counter::handleMakeListOfFilesInFolder(std::string TargetLocation_tmp)          //auxiliary method, used by dialog class(gui)
{                                                                                // search for files in folder and emit done signal with number of files in it
    Counter::SetTargetLocation(TargetLocation_tmp);
    Counter::SearchForFilesInFolder();
    emit(Done(FilesInFolder));
}

int Counter::CountLinesInFolder()                                                  //count all lines only in Target location
{                                                               //Target location is needed to by set firsly by Counter::SetTargetLocation method
    std::map <std::string, std::string> LinesInFile_tmp;
    int NumOfLines_tmp = 0;
    LinesInFile.clear();
    NumberOfLinesInFolder = 0;

    qDebug () << "<<< Counting lines in specified directory >>>";
    for(auto it : Counter::FilesInFolder)
    {
        pool.push_task([it, &NumOfLines_tmp, &LinesInFile_tmp]
        {
            int CurrentNumOfLines = 0;
            std::string temp;
            std::ifstream indata;
            indata.open(it);
            if(indata)
            {
                while ( std::getline(indata, temp) )
                {
                    CurrentNumOfLines++;
                }
                indata.close();
                qDebug() << QString::fromStdString(it) << "   -   " << CurrentNumOfLines << '\t' << "Thread - " << QThread::currentThreadId();
                LinesInFile_tmp.insert(std::pair<std::string, std::string>(it, std::to_string(CurrentNumOfLines)));
                NumOfLines_tmp = NumOfLines_tmp + CurrentNumOfLines;
            }else
            {
                LinesInFile_tmp.insert(std::pair<std::string, std::string>(it, "Error: file could not be opened"));
                qDebug () << QString::fromStdString(it) << "    " << "Error: file could not be opened";
            }
        });
    }
    pool.wait_for_tasks();
    NumberOfLinesInFolder = NumOfLines_tmp;
    LinesInFile = LinesInFile_tmp;
    qDebug() << "Number of lines in directory: " << NumberOfLinesInFolder;
    return NumberOfLinesInFolder;
}

int Counter::CountLinesInFolderAndSubFolders()                                                  //count all linesin Target location and its subfolders
{                                                               //Target location is needed to by set firsly by Counter::SetTargetLocation method
    //std::list <std::string> LinesInFile_tmp;
    int NumOfLines_tmp = 0;
    //LinesInFile.clear();
    NumberOfLinesInFolderAndSubfolders = 0;

    qDebug () << "<<< Counting lines in specified directory and subfolders >>>";

    for(auto it : Counter::FilesInFolderAndSubfolders)
    {
        pool.push_task([it, &NumOfLines_tmp] //, &LinesInFile_tmp]
        {
            int CurrentNumOfLines = 0;
            std::ifstream indata;
            std::string temp;
            indata.open(it);
            if(indata)
            {
                while ( std::getline(indata, temp) )
                {
                    CurrentNumOfLines++;
                }
                indata.close();
                qDebug() << QString::fromStdString(it) << "   -   " << CurrentNumOfLines << '\t' << "Thread - " << QThread::currentThreadId();
                //LinesInFile_tmp.push_back(std::to_string(CurrentNumOfLines));
                NumOfLines_tmp = NumOfLines_tmp + CurrentNumOfLines;
            }else
            {
                //LinesInFile_tmp.push_back("Error: file could not be opened");
                qDebug () << QString::fromStdString(it) << "    " << "Error: file could not be opened";
            }
        });
    }
    pool.wait_for_tasks();
    NumberOfLinesInFolderAndSubfolders = NumOfLines_tmp;
    //LinesInFile = LinesInFile_tmp;
    qDebug() << "Number of lines in directory: " << NumberOfLinesInFolderAndSubfolders;
    return NumberOfLinesInFolderAndSubfolders;
}

void Counter::CountSubFolders(int option)                             //slot, used by dialog class(gui)
{
    if(option == 1)
    {
    Counter::SearchForFilesInSubfolders();
    Counter::CountLinesInFolderAndSubFolders();
    emit(DoneCountingAll(NumberOfLinesInFolderAndSubfolders, FilesInFolderAndSubfolders.size()));
    }else
    {
        Counter::SearchForFilesInFolder();
        Counter::CountLinesInFolder();
        //emit(DoneCountingAll(NumberOfLinesInFolder, FilesInFolderAndSubfolders.size()));
        emit(Done2(LinesInFile, GetNumberOfLinesInFolder()));
    }
}

int Counter::GetNumberOfLinesInFolder()
{
    return NumberOfLinesInFolder;
}
