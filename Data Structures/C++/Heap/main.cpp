#include <iostream>
#include "Heap.h"

using namespace std;

int main() {
    vector<int> h = {50,30,20,15,10,8,16};
    int A[] = {50,30,20,15,10,8,16};
    Heap s(A, 7);
    cout << s;
}

