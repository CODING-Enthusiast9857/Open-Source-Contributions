//
// Created by vivek on 20-02-2023.
//

#include "Heap.h"

// Constructor that generates a heap from a vector
Heap::Heap(const std::vector<int> &t) : array(t) {
    for (unsigned short i = array.size() - 1; i > 0; i--)
        fix(i);
}

// Function that fixes the arrangement of elements to generate a max heap
void Heap::fix(int i) {
    while (i > 0 and array.at(i) > array.at(parent(i))) {
        std::swap(array.at(i), array.at(parent(i)));
        i = parent(i);
    }
}

// Function to remove from heap; only root (the biggest element) can be removed
int Heap::remove() {

    // Biggest element is at the front of the list
    int val = this->array.at(0);

    // Swap it with the last element
    std::swap(this->array.at(0), this->array[array.size() - 1]);

    // Delete the last element
    array.pop_back();

    // If array has become empty, it was the only element
    if (this->array.empty())
        return val;

    pop(left(0));
    return val;
}

// Function that handles the removal of top
void Heap::pop(int j) {
    int i{0};
    while (j <= this->array.size() - 1) {

        // If right child is a valid index, and it's bigger than left child
        if (j + 1 <= array.size() - 1 and array[j + 1] > array[j]) {            // j+1 contains the right child
            j += 1;         // make j point on right child
        }

        // If largest child is bigger than parent
        if (array[i] < array[j]) {

            // Swap it and make i point on the bigger child i.e. j
            std::swap(array[i], array[j]);
            i = j;

            // Make j point on left c hild of i
            j = left(i);
        } else
            break;
    }
}

// Function that inserts into a heap
void Heap::insert(int x) {
    this->array.push_back(x);
    int t = array.size();
    fix(t - 1);
}

// Heapify: a way to generate heap in O(n) instead of the typical O(n(logn))
void Heap::heapify(int A[], int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) {
        int j = left(i);
        pop(j);
    }
}

// This constructor uses heapify to generate heap
Heap::Heap(int *A, int n) {
    for (int i{0}; i < n; i++)
        array.push_back(A[i]);

    this->heapify(A, n);
}

// Print the heap
std::ostream &operator<<(std::ostream &os, const Heap &heap) {
    os << "[";
    for (int i{0}; i < heap.array.size(); i++) {
        os << heap.array.at(i);
        if (i not_eq heap.array.size() - 1)
            os << ", ";
    }
    os << "]";
    return os;
}






