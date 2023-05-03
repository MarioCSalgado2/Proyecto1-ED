#include "ListArr.h"
#include "Node.h"
#include "NodeArr.h"

ListArr::ListArr(){
    this->count = 0;

    this->root = new Node(0);
    root->left = new Node(0);
    root->right = new Node(0);
    
    NodeArr* ptrN1;  
    root->left->left = new NodeArr(6);   
    ptrN1 = root->left->left;

    NodeArr* ptrN2;  
    root->left->left = new NodeArr(6);   
    ptrN2 = root->left->left;

    NodeArr* ptrN3;  
    root->left->left = new NodeArr(6);   
    ptrN3 = root->left->left;

    NodeArr* ptrN4;  
    root->left->left = new NodeArr(6);   
    ptrN4 = root->left->left;

    ptrN1->next= ptrN2;
    ptrN2->next= ptrN3;
    ptrN3->next= ptrN4;
    ptrN4->next= ptrnull;

}

ListArr::~ListArr(){
    //delete ListArr();
}

int ListArr::size(){
    return count;
}

void ListArr::insert_left(int data){

    this->count++;
}

void ListArr::insert_right(int data){
    // TODO: implementar esta función
}

void ListArr::insert(int data, int index){
    // TODO: implementar esta función
}

void ListArr::print(){
    // TODO: implementar esta función
}

bool ListArr::find(int data){
    // TODO: implementar esta función
}

int ListArr:: delete_left(){
    this->count=count-1;
}

int ListArr:: delete_right(){
    this->count=count-1;
}