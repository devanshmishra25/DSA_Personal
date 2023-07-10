#include<bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std; 

// void show(int a[], int arraysize){
//     for(int i = 0; i<arraysize ; i++){
//         cout<<a[i]<<",";

//         //Here the comma is printed after the last element as well and we do not need that 
//         //So in comment I have written a solution for this 
//     }
// }

void show(int a[], int arraysize) {
    for (int i = 0; i < arraysize; i++) {
        cout << a[i];
        if (i < arraysize - 1) {
            cout << " , ";
        }
    }
}

int main(){
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a)/sizeof(a[0]);
    cout<< "The array is : ";
    show(a,asize);
    sort(a, a+asize);

    if(binary_search(a, a+10, 2))
    cout<<"\nThe element is found";
    else
    cout<<"Element is not found ";

    return 0;
}