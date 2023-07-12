#include<bits/stdc++.h>

using namespace std; 

struct Queue{

    //size is the size of the current queue
    //cap is the capacity of the whole queue
    //we initialize a constructor with capacity c as a parameter.
    int size, cap;
    int *arr;
    Queue(int c){
        cap = c;
        size = 0; // size is 0 initially
        arr = new int[cap];

    }

    boolisFull(){
        return size == cap;
    }

    bool isEmpty(){
        return (size == 0);
    }

    void enqueue(int x){
        if(isFull())
        return;
        arr[size] = x;
        size++;
    }

}