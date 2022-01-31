#include "dialog.h"
#include "ui_dialog.h"

using std::filesystem::directory_iterator;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    dirModel = new QFileSystemModel(this);
    fileModel = new QFileSystemModel(this);
    QStringList headerList; // tworzę listę nagłówków kolumny

    dirModel->setReadOnly(true);
    dirModel->setRootPath(mPath);
    dirModel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    ui->treeView->setModel(dirModel);

    ui->tableWidget->setColumnCount(2); // ustawiam liczbę kolumn


    headerList << "Plik" << "Liczba wierszy"; // dodaję nagłówki

    ui->tableWidget->setHorizontalHeaderLabels(headerList); // ustawiam nazwy kolumn w nagłówku
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); // ustawiam tryb bez możliwości edytowania pól tabeli
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_treeView_clicked(const QModelIndex &index)
{
    ui->tableWidget->setRowCount(0);
    ui->label->setText("");
    ui->label_4->setText("");
    ui->label_8->setText("");
    ui->label_9->setText("");
    SelectedPath = (dirModel->fileInfo(index).absoluteFilePath()).toUtf8().constData();
    emit PathChanged(SelectedPath);
}

void Dialog::handleViewListOfFilesInFolder(std::list <std::string> ListOfFilesInFolder)
{
    int rowNumber = 0;
    int column_number;
    QString tmp;
    column_number = 0;
    for(auto it : ListOfFilesInFolder)
    {
        tmp = QString::fromStdString(it);
        tmp = tmp.split("/").last();
        qDebug() << tmp;
        rowNumber = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(rowNumber);
        QTableWidgetItem *newItem = new QTableWidgetItem(tmp); // tworzę element dla pierszej kolumny
        ui->tableWidget->setItem(rowNumber, column_number, newItem);   // dodaję do tabeli
        ui->tableWidget->setRowCount(rowNumber + 1);
    }
    ui->label_8->setText(QString::number(ListOfFilesInFolder.size()));

}

void Dialog::handleViewRowsNumber(std:: map <std::string, std::string> RowsNumberMap, int NumberOfLines)
{
        int rowNumber = 0;
        int column_number = 1;
        QString tmp;
        for(auto it : RowsNumberMap)
        {
            tmp = QString::fromStdString(it.first);
            tmp = tmp.split("/").last();
            QList<QTableWidgetItem *> TempItem = ui->tableWidget->findItems(tmp, Qt::MatchExactly);
            rowNumber = TempItem.first()->row();
            if(rowNumber != -1)
            {
                tmp = QString::fromStdString(it.second);
                tmp = tmp.split("/").last();
                QTableWidgetItem *newItem = new QTableWidgetItem(tmp); // tworzę element dla drugiej kolumny
                ui->tableWidget->setItem(rowNumber, column_number, newItem);   // dodaję do tabeli
            }
        }
        ui->label->setText(QString::number(NumberOfLines));
}

void Dialog::on_CountSubFolderspushButton_clicked()
{
    if(SelectedPath.length() != 0)
    {
        emit(Dialog::CountSubFolders(1));
    }
}

void Dialog::DoneCountingAll(int number, int files)
{

        ui->label_4->setText(QString::number(number));
        ui->label_9->setText(QString::number(files));
}

void Dialog::on_CountFolderpushButton_clicked()
{
    if(SelectedPath.length() != 0)
    {
        emit(Dialog::CountSubFolders(2));
    }
}
