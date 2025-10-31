//
// Created by Ahmed Mustafa on 10/31/2025.
//

#include "HeapSort.h"

template <typename T>
HeapSort<T>::HeapSort(T *arr, int n) {
    array = arr;
    length = n;

    heap = new Heap<T>(n);
    for (int i = 0; i < length; ++i) {
        heap->insert(array[i]);
    }
}

template <typename T>
void HeapSort<T>::sort() {
    for (int i = 0; i < length; ++i) {
        array[i] = heap->extractMin();
    }
}

template class HeapSort<int>;