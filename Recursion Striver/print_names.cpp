// #include <iostream>
// using namespace std;

// void printDevansh(int n) {
//     if (n <= 0) {
//         return;
//     }

//     cout << "Devansh" << endl;
//     printDevansh(n-1);
// }

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     printDevansh(n);

//     return 0;
// }


//Another method for the above questions

#include<bits/stdc++.h>

using namespace std;

void printName(int i, int n){
    if(i>n)
    return;

    cout<<"Devansh"<<endl;

    printName(i+1, n);
}

int main(){
    int n ;
    cout<<"Enter the number";
    cin>>n;

    printName(1,n);
    return 0;

}