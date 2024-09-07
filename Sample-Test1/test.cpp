// my_program_test.cpp
#include "gtest/gtest.h"
#include "my_program.h"


int add(int a, int b) {
    return a + b;
}

bool isEven(int num) {
    return num % 2 == 0;
}

// Test case for the add function
TEST(AddFunctionTest, PositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(10, 5), 15);
}

TEST(AddFunctionTest, NegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
    EXPECT_EQ(add(-10, 5), -5);
}

// Test case for the isEven function
TEST(IsEvenFunctionTest, HandlesEvenNumbers) {
    EXPECT_TRUE(isEven(4));
    EXPECT_TRUE(isEven(10));
}

TEST(IsEvenFunctionTest, HandlesOddNumbers) {
    EXPECT_FALSE(isEven(3));
    EXPECT_FALSE(isEven(7));
}