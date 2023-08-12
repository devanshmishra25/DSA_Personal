#include<bits/stdc++.h>
using namespace std;

void func(int i, int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }

    func(i-1, sum+i);

}

int main(){
    int n;
    cout<<"Enter the number you want to add : ";
    cin>>n;

    func(n,0);

}