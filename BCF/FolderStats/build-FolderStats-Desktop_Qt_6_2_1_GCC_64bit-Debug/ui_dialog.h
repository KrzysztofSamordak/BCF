/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView;
    QPushButton *CountFolderpushButton;
    QPushButton *CountSubFolderspushButton;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1246, 484);
        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 941, 411));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(gridLayoutWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        treeView = new QTreeView(gridLayoutWidget);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        CountFolderpushButton = new QPushButton(Dialog);
        CountFolderpushButton->setObjectName(QString::fromUtf8("CountFolderpushButton"));
        CountFolderpushButton->setGeometry(QRect(10, 420, 225, 25));
        CountSubFolderspushButton = new QPushButton(Dialog);
        CountSubFolderspushButton->setObjectName(QString::fromUtf8("CountSubFolderspushButton"));
        CountSubFolderspushButton->setGeometry(QRect(10, 450, 225, 25));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(510, 420, 300, 21));
        label_3->setMaximumSize(QSize(300, 16777215));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(510, 450, 351, 21));
        label_2->setMaximumSize(QSize(450, 16777215));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(870, 420, 150, 21));
        label->setMaximumSize(QSize(150, 16777215));
        label->setScaledContents(false);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(870, 450, 150, 21));
        label_4->setMaximumSize(QSize(150, 16777215));
        label_4->setScaledContents(true);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(950, 10, 101, 17));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(950, 40, 91, 17));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(950, 60, 201, 17));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1140, 40, 67, 17));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1140, 60, 67, 17));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        CountFolderpushButton->setText(QCoreApplication::translate("Dialog", "Przelicz wiersze w folderze", nullptr));
        CountSubFolderspushButton->setText(QCoreApplication::translate("Dialog", "Przelicz wiersze w podfolderach", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Liczba wierszy w wybranym katalogu", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Liczba wierszy w wybranym katalogu i podfolderach", nullptr));
        label->setText(QString());
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("Dialog", "Liczba plik\303\263w:", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "- w folderze", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "- w folderze i podfolderach", nullptr));
        label_8->setText(QString());
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
