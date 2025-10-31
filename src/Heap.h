//
// Created by Ahmed Mustafa on 10/31/2025.
//

#ifndef HEAP_H
#define HEAP_H


template<typename T>
class Heap {
    T *data;
    int capacity;
    int size;

    void heapify(int i, int n);
public:
    Heap(int cap);
    ~Heap();
    void insert(const T &value);
    T getMin() const;
    T getMax() const;

    T extractMin();
    T extractMax();
};



#endif //HEAP_H
