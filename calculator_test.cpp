#include "CppUTest/TestHarness.h"
#include "calculator.cpp"

TEST_GROUP(CalculatorTests)
{
};

TEST(CalculatorTests, AddTest)
{
    int result = add(2, 3);
    CHECK_EQUAL(5, result);
}

TEST(CalculatorTests, SubtractTest)
{
    int result = subtract(5, 3);
    CHECK_EQUAL(2, result);
}
