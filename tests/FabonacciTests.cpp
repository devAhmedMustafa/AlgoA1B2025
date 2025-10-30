//
// Created by Ahmed Mustafa on 10/30/2025.
//

#include <gtest/gtest.h>
#include <FibonacciSeries.h>

TEST(RecursiveFibonacciTests, HandlesBaseCases) {
    EXPECT_EQ(FibonacciSeries::recursive(0), 0);
    EXPECT_EQ(FibonacciSeries::recursive(1), 1);
}

TEST(RecursiveFibonacciTests, HandlesSmallNumbers) {
    EXPECT_EQ(FibonacciSeries::recursive(2), 1);
    EXPECT_EQ(FibonacciSeries::recursive(3), 2);
    EXPECT_EQ(FibonacciSeries::recursive(4), 3);
    EXPECT_EQ(FibonacciSeries::recursive(5), 5);
    EXPECT_EQ(FibonacciSeries::recursive(6), 8);
}

TEST(RecursiveFibonacciTests, HandlesLargerNumbers) {
    EXPECT_EQ(FibonacciSeries::recursive(10), 55);
    EXPECT_EQ(FibonacciSeries::recursive(15), 610);
    EXPECT_EQ(FibonacciSeries::recursive(20), 6765);
}

TEST(DivideAndConquerFibonacciTests, HandlesBaseCases) {
    EXPECT_EQ(FibonacciSeries::divideAndConquer(0), 0);
    EXPECT_EQ(FibonacciSeries::divideAndConquer(1), 1);
}

TEST(DivideAndConquerFibonacciTests, HandlesSmallNumbers) {
    EXPECT_EQ(FibonacciSeries::divideAndConquer(2), 1);
    EXPECT_EQ(FibonacciSeries::divideAndConquer(3), 2);
    EXPECT_EQ(FibonacciSeries::divideAndConquer(4), 3);
    EXPECT_EQ(FibonacciSeries::divideAndConquer(5), 5);
    EXPECT_EQ(FibonacciSeries::divideAndConquer(6), 8);
}

TEST(DivideAndConquerFibonacciTests, HandlesLargerNumbers) {
    EXPECT_EQ(FibonacciSeries::divideAndConquer(10), 55);
    EXPECT_EQ(FibonacciSeries::divideAndConquer(15), 610);
    EXPECT_EQ(FibonacciSeries::divideAndConquer(20), 6765);
}