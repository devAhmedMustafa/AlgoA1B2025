//
// Created by Ahmed Mustafa on 10/31/2025.
//

#include <gtest/gtest.h>
#include "PriorityQueue.h"

TEST(PriorityQueueTest, EnqueueDequeue) {
    PriorityQueue<std::string> pq;

    pq.enqueue("task1", 1);
    pq.enqueue("task2", 3);
    pq.enqueue("task3", 2);

    EXPECT_EQ(pq.dequeue(), "task2");
    EXPECT_EQ(pq.dequeue(), "task3");
    EXPECT_EQ(pq.dequeue(), "task1");
}

TEST(PriorityQueueTest, DequeueEmpty) {
    PriorityQueue<int> pq;

    EXPECT_THROW(pq.dequeue(), std::out_of_range);
}

TEST(PriorityQueueTest, EnqueueSamePriority) {
    PriorityQueue<std::string> pq;

    pq.enqueue("task1", 2);
    pq.enqueue("task2", 2);
    pq.enqueue("task3", 2);

    EXPECT_EQ(pq.dequeue(), "task1");
    EXPECT_EQ(pq.dequeue(), "task2");
    EXPECT_EQ(pq.dequeue(), "task3");
}

TEST(PriorityQueueTest, MixedPriorities) {
    PriorityQueue<int> pq;

    pq.enqueue(10, 5);
    pq.enqueue(20, 1);
    pq.enqueue(30, 3);
    pq.enqueue(40, 4);
    pq.enqueue(50, 2);

    EXPECT_EQ(pq.dequeue(), 10);
    EXPECT_EQ(pq.dequeue(), 40);
    EXPECT_EQ(pq.dequeue(), 30);
    EXPECT_EQ(pq.dequeue(), 50);
    EXPECT_EQ(pq.dequeue(), 20);
}