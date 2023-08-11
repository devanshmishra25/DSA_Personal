 //print 1 to n

// #include<bits/stdc++.h>
// using namespace std;

// void func(int i, int n){
//     if(i>n)
//     return;

//     cout<<i<<endl;

//     func(i+1,n);

// }

// int main(){
//     int n = 4;
//     func(1,n);
// }

//-------------------------------------------------------------------------
//print n to 1

#include<bits/stdc++.h>
using namespace std;

void func(int i){

    if(i < 1)
    return;

    cout<<i<<endl;
    func(i-1);

}

int main(){
    int i;
    cin>>i;

    func(5);
}

