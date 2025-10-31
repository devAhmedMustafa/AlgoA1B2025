//
// Created by Ahmed Mustafa on 10/31/2025.
//

#include "PriorityQueue.h"

#include <string>

template<typename T>
void PriorityQueue<T>::enqueue(const T &value, const int priority) {
    this->insert(Node<T>{value, priority, counter++});
}

template<typename T>
T PriorityQueue<T>::dequeue() {
    Node<T> node = this->extractMax();
    return node.value;
}

template struct Node<std::string>;
template struct Node<int>;
template class PriorityQueue<std::string>;
template class PriorityQueue<int>;
