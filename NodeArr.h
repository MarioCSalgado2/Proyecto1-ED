#ifndef NodeArr_H
#define NodeArr_H

class NodeArr {
public:
    int* arr;
    int count;
    int capacity;
    NodeArr* next;

    NodeArr(int capacity) {
        this->capacity = capacity;
        this->count = 0;
        this->arr = new int[capacity];
        this->next = nullptr;
    }

    NodeArr::~NodeArr() {
        delete[] arr;
    }
};

#endif
