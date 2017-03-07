//recursiveTest.cpp
//Program to demonstrate iteration vs recursion on lists
//Diba Mirza
//
#include <iostream>
#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"

using namespace std;
void printElementsBackwards(Node *list){
}

void printElementsRecursively(Node *list){
}

void printElementsIteratively(Node *list){
    for(Node *p =list; p!=NULL; p=p->next){
        cout<<p->data<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    LinkedList *mylist = arrayToLinkedList(arr,10);
    assert(mylist);
    cout<<"Printing elements iteratively"<<endl;
    printElementsIteratively(mylist->head);
    //cout<<"Printing elements recursively"<<endl;
    printElementsRecursively(mylist->head);
    //cout<<"Printing elements backwards "<<endl;
    printElementsBackwards(mylist->head);
    return 0;
}


