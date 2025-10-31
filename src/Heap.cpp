//
// Created by Ahmed Mustafa on 10/31/2025.
//

#include "Heap.h"

#include <stdexcept>

#include "PriorityQueue.h"

template<typename T>
Heap<T>::Heap(const int cap) {
    capacity = cap;
    data = new T[capacity];
    size = 0;
}

template<typename T>
Heap<T>::~Heap() {
    delete[] data;
}

template<typename T>
void Heap<T>::insert(const T &value) {
    if (size >= capacity) {
        throw std::overflow_error("Heap capacity exceeded");
    }

    data[size] = value;
    size++;

    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(i, size - 1);
    }
}

template<typename T>
T Heap<T>::getMin() const {
    if (size == 0) {
        throw std::underflow_error("Heap is empty");
    }

    T minElement = data[size / 2];
    for (int i = size / 2 + 1; i < size; i++) {
        if (data[i] < minElement) {
            minElement = data[i];
        }
    }
}

template<typename T>
T Heap<T>::getMax() const {
    if (size == 0) {
        throw std::underflow_error("Heap is empty");
    }

    return data[0];
}

template<typename T>
void Heap<T>::heapify(int i, const int n) {
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    int largest = i;

    if (l <= n && data[l] > data[largest]) {
        largest = l;
    }

    if (r <= n && data[r] > data[largest]) {
        largest = r;
    }
    if (largest != i) {
        std::swap(data[i], data[largest]);
        heapify(largest, n);
    }
}

template <typename T>
T Heap<T>::extractMax() {
    if (size == 0) {
        throw std::out_of_range("Heap is empty");
    }

    T maxElement = data[0];
    data[0] = data[size - 1];
    size--;
    heapify(0, size - 1);

    return maxElement;
}

template <typename T>
T Heap<T>::extractMin() {
    if (size == 0) {
        throw std::out_of_range("Heap is empty");
    }

    // Find the index of the minimum element among the leaves
    int minIndex = size / 2;
    for (int i = size / 2 + 1; i < size; i++) {
        if (data[i] < data[minIndex]) {
            minIndex = i;
        }
    }
    T minElement = data[minIndex];
    data[minIndex] = data[size - 1];
    size--;
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(i, size - 1);
    }

    return minElement;
}

template class Heap<int>;
template class Heap<Node<std::string>>;
template class Heap<Node<int>>;