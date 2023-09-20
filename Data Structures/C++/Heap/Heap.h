//
// Created by vivek on 20-02-2023.
//

#ifndef HEAP_HEAP_H
#define HEAP_HEAP_H


#include <vector>
#include <ostream>

class Heap {
    std::vector<int> array;
public:
    explicit Heap(const std::vector<int> &t);

    Heap(int A[], int n);

    Heap() = default;

    void insert(int x);

    void fix(int i);

    void heapify(int A[], int n);

    int remove();

    int parent(int i) { return (i - 1) / 2; }

    int left(int i) { return (2 * i) + 1; }

    int right(int i) { return (2 * i) + 2; }

    friend std::ostream &operator<<(std::ostream &os, const Heap &heap);

private:
    void pop(int j);
};


#endif //HEAP_HEAP_H
