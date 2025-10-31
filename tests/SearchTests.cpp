//
// Created by Ahmed Mustafa on 10/31/2025.
//

#include <gtest/gtest.h>
#include "Search.h"

TEST(SearchTest, IterativeSequentialSearch_Found) {
    int arr[] = {4, 2, 7, 1, 9};
    int size = std::size(arr);
    int target = 7;

    int result = Search::iterativeSequentialSearch(arr, size, target);
    EXPECT_EQ(result, 2);
}

TEST(SearchTest, IterativeSequentialSearch_NotFound) {
    int arr[] = {4, 2, 7, 1, 9};
    int size = std::size(arr);
    int target = 5;

    int result = Search::iterativeSequentialSearch(arr, size, target);
    EXPECT_EQ(result, -1);
}

TEST(SearchTest, RecursiveSequentialSearch_Found) {
    int arr[] = {4, 2, 7, 1, 9};
    int size = std::size(arr);
    int target = 1;

    int result = Search::recursiveSequentialSearch(arr, size, target);
    EXPECT_EQ(result, 3);
}

TEST(SearchTest, RecursiveSequentialSearch_NotFound) {
    int arr[] = {4, 2, 7, 1, 9};
    int size = std::size(arr);
    int target = 6;

    int result = Search::recursiveSequentialSearch(arr, size, target);
    EXPECT_EQ(result, -1);
}

TEST(SearchTest, IterativeBinarySearch_Found) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = std::size(arr);
    int target = 5;

    int result = Search::iterativeBinarySearch(arr, size, target);
    EXPECT_EQ(result, 4);
}

TEST(SearchTest, IterativeBinarySearch_NotFound) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = std::size(arr);
    int target = 10;

    int result = Search::iterativeBinarySearch(arr, size, target);
    EXPECT_EQ(result, -1);
}

TEST(SearchTest, RecursiveBinarySearch_Found) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = std::size(arr);
    int target = 3;

    int result = Search::recursiveBinarySearch(arr, size, target);
    EXPECT_EQ(result, 2);
}

TEST(SearchTest, RecursiveBinarySearch_NotFound) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = std::size(arr);
    int target = 0;

    int result = Search::recursiveBinarySearch(arr, size, target);
    EXPECT_EQ(result, -1);
}