#include "dialog.h"
#include "Counter.h"

#include <QApplication>
#include<QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    Counter *newCounter = new Counter();
    QObject::connect(&w, &Dialog::PathChanged,
                     newCounter, &Counter::handleMakeListOfFilesInFolder);
    QObject::connect(newCounter, &Counter::Done,
                     &w, &Dialog::handleViewListOfFilesInFolder);
    QObject::connect(newCounter, &Counter::Done2,
                     &w, &Dialog::handleViewRowsNumber);
    QObject::connect(&w, &Dialog::CountSubFolders,
                     newCounter, &Counter::CountSubFolders);
    QObject::connect(newCounter, &Counter::DoneCountingAll,
                     &w, &Dialog::DoneCountingAll);

    w.show();
    return a.exec();
}
