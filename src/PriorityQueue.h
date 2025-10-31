//
// Created by Ahmed Mustafa on 10/31/2025.
//

#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include "Heap.h"

template <typename T>
struct Node {
    T value;
    int priority;
    int order;

    bool operator >(const Node& other) const {
        if (priority == other.priority) {
            return order < other.order;
        }
        return priority > other.priority;
    }

    bool operator <(const Node& other) const {
        if (priority == other.priority) {
            return order > other.order;
        }
        return priority < other.priority;
    }
};

template<typename T>
class PriorityQueue : Heap<Node<T>> {
    int counter = 0;
public:
    PriorityQueue(int cap = 100) : Heap<Node<T>>(cap) {}

    void enqueue(const T& value, int priority);
    T dequeue();

};



#endif //PRIORITYQUEUE_H
