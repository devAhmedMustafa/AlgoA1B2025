//
// Created by Ahmed Mustafa on 10/31/2025.
//

#include <gtest/gtest.h>
#include "Heap.h"

TEST(HeapTest, InsertAndGetMax) {
    Heap<int> heap(10);
    heap.insert(5);
    heap.insert(10);
    heap.insert(3);

    EXPECT_EQ(heap.getMax(), 10);
}

TEST(HeapTest, InsertAndGetMin) {
    Heap<int> heap(10);
    heap.insert(5);
    heap.insert(10);
    heap.insert(3);

    EXPECT_EQ(heap.getMin(), 3);
}