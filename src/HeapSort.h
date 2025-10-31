//
// Created by Ahmed Mustafa on 10/31/2025.
//

#ifndef HEAPSORT_H
#define HEAPSORT_H
#include "Heap.h"

template <typename T>
class HeapSort {

    T *array;
    int length;

    Heap<T>* heap;

public:
    HeapSort(T *arr, int n);
    void sort();

};



#endif //HEAPSORT_H
