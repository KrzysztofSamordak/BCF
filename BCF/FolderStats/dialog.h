#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>
#include <filesystem>
#include <string>
#include <QObject>
#include <QList>


QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    std::string SelectedPath;
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_treeView_clicked(const QModelIndex &index);
    void on_CountSubFolderspushButton_clicked();
    void on_CountFolderpushButton_clicked();

public slots:
    void handleViewListOfFilesInFolder(std::list <std::string> ListOfFilesInFolder);
    void handleViewRowsNumber(std:: map <std::string, std::string> RowsNumberMap, int NumberOfLines);
    void DoneCountingAll(int number,int files);

private:
    Ui::Dialog *ui;
    QFileSystemModel *dirModel;
    QFileSystemModel *fileModel;
    QString mPath = "/";

signals:
    void PathChanged(std::string newValue);
    void CountSubFolders(int option);
};
#endif // DIALOG_H
