#include "dialog.h"
#include "Counter.h"
#include "tst_tst1.cpp"
#include <gtest/gtest.h>
#include <QApplication>
#include<QObject>

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

