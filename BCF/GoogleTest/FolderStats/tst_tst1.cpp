#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include <Counter.h>



using namespace testing;

class myTestExample : public testing::Test
{
public:
    Counter TestCounter;
    bool PassTest = true;
    bool FailTest = false;
    std::string IncorrectTargetLocation = "/home/kssa/ZU";
    std::string CorrectTargetLocation = "/home/kssa/ZUT/Programowanie_z_elementami_systemow_wbudowanych/C++";
    std::string NotDirectory = "/home/kssa/ZUT/Programowanie_z_elementami_systemow_wbudowanych/EmpyFileFolder/EmptyFile.txt";
    std::string EmptyTargetLocation = "/home/kssa/ZUT/Programowanie_z_elementami_systemow_wbudowanych/C++/Empty";
    std::string EmptyFileLocation = "/home/kssa/ZUT/Programowanie_z_elementami_systemow_wbudowanych/EmpyFileFolder";

    virtual void SetUp()
    {
        TestCounter.SetTargetLocation(CorrectTargetLocation);

    }
    virtual void TearDown()
    {
    }
};

TEST_F(myTestExample, TryToSetIncorrectTargetLocation)
{
     bool expected_result = FailTest;
     bool test_result;
     test_result = TestCounter.SetTargetLocation(IncorrectTargetLocation);
     EXPECT_EQ(expected_result, test_result);
}

TEST_F(myTestExample, TryToSetCorrectTargetLocation)
{
     bool expected_result = PassTest;
     bool test_result;
     test_result = TestCounter.SetTargetLocation(CorrectTargetLocation);
     EXPECT_EQ(expected_result, test_result);
}

TEST_F(myTestExample, TryToSetFileAsTargetLocation)
{
     bool expected_result = FailTest;
     bool test_result;
     test_result = TestCounter.SetTargetLocation(NotDirectory);
     EXPECT_EQ(expected_result, test_result);
}

TEST_F(myTestExample, SearchForFilesInFolder)
{

     int expected_result = 2;
     int test_result;
     std::cout << "Expected number of files in folder = "<< expected_result << '\n';
     test_result = TestCounter.SearchForFilesInFolder();
     std::cout << "DUT: Number of files in folder = "<< test_result << '\n';
     EXPECT_EQ(expected_result, test_result);
}

TEST_F(myTestExample, SearchForFilesInEmptyFolder)
{

     int expected_result = 0;
     int test_result;
     TestCounter.SetTargetLocation(EmptyTargetLocation);
     std::cout << "Expected number of files in folder = "<< expected_result << '\n';
     test_result = TestCounter.SearchForFilesInFolder();
     std::cout << "DUT: Number of files in folder = "<< test_result << '\n';
     EXPECT_EQ(expected_result, test_result);
}

TEST_F(myTestExample, SearchForFilesInTargetLocationAndItsSubfolders)
{

     int expected_result = 34;
     int test_result;
     std::cout << "Expected number of files in folder = "<< expected_result << '\n';
     test_result = TestCounter.SearchForFilesInSubfolders();
     std::cout << "DUT: Number of files in folder = "<< test_result << '\n';
     EXPECT_EQ(expected_result, test_result);
}

TEST_F(myTestExample, SearchForFilesInEmptyTargetLocationAndEmptySubfolders)
{

     int expected_result = 0;
     int test_result;
     TestCounter.SetTargetLocation(EmptyTargetLocation);
     std::cout << "Expected number of files in folder = "<< expected_result << '\n';
     test_result = TestCounter.SearchForFilesInSubfolders();
     std::cout << "DUT: Number of files in folder = "<< test_result << '\n';
     EXPECT_EQ(expected_result, test_result);
}

TEST_F(myTestExample, CountLinesOnlyInTargetLocation)
{

     int expected_result = 251;
     int test_result;
     std::cout << "Expected number of lines in folder = "<< expected_result << '\n';
     TestCounter.SearchForFilesInFolder();
     test_result = TestCounter.CountLinesInFolder();
     std::cout << "DUT: Number of lines in folder = "<< test_result << '\n';
     EXPECT_EQ(expected_result, test_result);
}

TEST_F(myTestExample, CountLinesInEmptyFile)
{

     int expected_result = 0;
     int test_result;
     std::cout << "Expected number of lines in folder = "<< expected_result << '\n';
     TestCounter.SetTargetLocation(EmptyFileLocation);
     TestCounter.SearchForFilesInFolder();
     test_result = TestCounter.CountLinesInFolder();
     std::cout << "DUT: Number of lines in folder = "<< test_result << '\n';
     EXPECT_EQ(expected_result, test_result);
}

TEST_F(myTestExample, CountLinesInSubfoldersWithEmptyFiles)
{

     int expected_result = 0;
     int test_result;
     std::cout << "Expected number of lines in folder and subfolders = "<< expected_result << '\n';
     TestCounter.SetTargetLocation(EmptyFileLocation);
     TestCounter.SearchForFilesInSubfolders();
     test_result = TestCounter.CountLinesInFolderAndSubFolders();
     std::cout << "DUT: Number of lines in folder and its subfolders = "<< test_result << '\n';
     EXPECT_EQ(expected_result, test_result);
}

TEST_F(myTestExample, CountLinesInTargetLocationAndItsSubfolders)
{
     int expected_result = 40976;
     int test_result;
     std::cout << "Expected number of lines in folder and its subfolders = "<< expected_result << '\n';
     TestCounter.SearchForFilesInSubfolders();
     test_result = TestCounter.CountLinesInFolderAndSubFolders();
     std::cout << "DUT: Number of lines in folder and its subfolders = "<< test_result << '\n';
     EXPECT_EQ(expected_result, test_result);
}
/*
TEST_F(myTestExample, test_999)
{
     number_to_read = 999;
     expected_read_result = "dziewiecsetdziewiecdziesiatdziewiec";
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
}
TEST_F(myTestExample, test_5)
{
     number_to_read = 5;
     expected_read_result = "piec";
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
}
TEST_F(myTestExample, test_10)
{
     number_to_read = 10;
     expected_read_result = "dziesiec";
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
}
TEST_F(myTestExample, test_15)
{
     number_to_read = 15;
     expected_read_result = "pietnascie";
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
}
TEST_F(myTestExample, test_25)
{
     number_to_read = 25;
     expected_read_result = "dwadziesciapiec";
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
}
TEST_F(myTestExample, test_115)
{
     number_to_read = 115;
     expected_read_result = "stopietnascie";
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
}
TEST_F(myTestExample, test_300)
{
     number_to_read = 300;
     expected_read_result = "trzysta";
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
}
TEST_F(myTestExample, test_790)
{
     number_to_read = 790;
     expected_read_result = "siedemsetdziewiecdziesiat";
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
}
TEST_F(myTestExample, negative_test_above_the_limit)
{
     number_to_read = 1000;
     expected_read_result = "podana liczba nie miesci sie w zakresie";
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
}
TEST_F(myTestExample, negative_test_below_the_limit)
{
     number_to_read = -1;
     expected_read_result = "podana liczba nie miesci sie w zakresie";
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
}
TEST_F(myTestExample, test_in_range_0_to_20)
{

     for(i = 1; i < 20; i++)
     {
     number_to_read = i;
     expected_read_result = read_my_value.J[i];
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
     }
}
TEST_F(myTestExample, test_decimal_parts)
{
     for(i = 10; i < 100; i+=10)
     {
     number_to_read = i;
     expected_read_result = read_my_value.D[i/10];
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
     }
}
TEST_F(myTestExample, test_hundreds)
{
     for(i = 100; i < 1000; i+=100)
     {
     number_to_read = i;
     expected_read_result = read_my_value.S[i/100];
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
     }
}
TEST_F(myTestExample, test_in_range_101_to_120)
{

     for(i = 101; i < 120; i++)
     {
     number_to_read = i;
     expected_read_result = read_my_value.S[1];
     expected_read_result += read_my_value.J[i-100];
     number_read_result = read_my_value.read(number_to_read);
     EXPECT_EQ(expected_read_result, number_read_result);
     }
}
*/

