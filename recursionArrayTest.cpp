//recursionTest.cpp
//Program to demonstrate iteration vs recursion on arrays
//Diba Mirza
//
#include <iostream>
#include <cassert>

using namespace std;
void printElements(char *arr, int len){
    for(int i =0; i< len; i++)
       cout<<arr[i];
    cout<<endl;
}

void printElementsRecursive(char *arr, int len){
    if(len<=0){
        cout<<endl;
        return;
    }
    cout<<*arr;
    printElementsRecursive(arr+1,len-1);
}

void printElementsBackwards(char *arr, int len){
    if(len<=0){
        cout<<endl;
        return;
    }
    cout<<*arr;
    printElementsBackwards(arr+1,len-1);
}
int main(){
   char name[]={'B','o','n','d','0','0','7'};
   //printElements(name, 7);
   printElementsRecursive(name, 7);
   return 0;
}




