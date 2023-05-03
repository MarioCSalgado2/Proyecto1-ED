#include "ListArrADT.h"
#ifndef ListArr_H
#define ListArr_H

using namespace std;

class ListArr : public ListArrADT {
private:
    int count;

public:
    ListArr();
    ~ListArr();
    int size();
    void insert_left(int data);
    void insert_right(int data);
    void insert(int data, int index)
    void print();
    bool find(int data);
    int delete_left();
    int delete_right();
};

#endif
