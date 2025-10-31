//
// Created by Ahmed Mustafa on 10/31/2025.
//

#include <gtest/gtest.h>
#include "HeapSort.h"

TEST(HeapSortTest, SortIntegers) {
    int arr[] = {5, 3, 8, 1, 2, 7};
    int n = std::size(arr);

    HeapSort heapSort(arr, n);
    heapSort.sort();

    const int expected[] = {1, 2, 3, 5, 7, 8};
    for (int i = 0; i < n; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

TEST(HeapSortTest, SortSingleElement) {
    int arr[] = {42};
    int n = std::size(arr);

    HeapSort heapSort(arr, n);
    heapSort.sort();

    int expected[] = {42};
    for (int i = 0; i < n; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}