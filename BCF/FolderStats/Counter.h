#ifndef COUNTER_H
#define COUNTER_H

#include <iostream> 
#include <filesystem>
#include <algorithm>
#include <list>
#include <fstream>
#include "thread_pool.hpp"
#include <thread>
#include <QThread>
#include <QObject>
#include <gtest/gtest.h>

class Counter : public QObject
{
        Q_OBJECT
private:
    int NumberOfLinesInFolder;
    int NumberOfLinesInFolderAndSubfolders;
    thread_pool pool;                                   // Constructs a thread pool with as many threads as available in the hardware.
	std::string TargetLocation;
    bool chcekIfExist(std::string TargetLocation_tmp);
public slots:
    void handleMakeListOfFilesInFolder(std::string TargetLocation_tmp);
    void CountSubFolders(int option);
public:
    std::list <std::string> FilesInFolder;
    std::map <std::string, std::string> LinesInFile;
    std::list <std::string> FilesInFolderAndSubfolders;
    int SearchForFilesInSubfolders();                   //return a number of files in Target location and its subfolders
    int SearchForFilesInFolder();                       //return a number of files in Target location
	bool SetTargetLocation(std::string TargetLocation_tmp);
    int CountLinesInFolder();                          //return lines number only in Target location
    int CountLinesInFolderAndSubFolders();             //return lines number in Target location and its subfolders
    int GetNumberOfLinesInFolder();
    Counter();
signals:
    void Done(std::list <std::string> FilesInFolder);
    void Done2(std::map <std::string, std::string> FilesAndLines, int NumberOfLines);
    void DoneCountingAll(int number, int NumberOfAllFiles);
	
};

#endif //COUNTER_H
