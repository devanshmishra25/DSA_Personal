//iTERATIVE 

// #include<bits/stdc++.h>
// using namespace std;

// int factorial(int X){
//     int ans = 1;
//     for(int i = 1; i<=X; i++){
//         ans  = ans * i;

//     }

//     return ans;
// }

// int main(){
//     int X;
//     cin>>X;
//     int result = factorial(X);
//     cout<<result<<endl;

// }


//Recursive

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;

    }

    return n * factorial(n-1);
}

int main(){
    int n;
    cout<<"The number is : ";
    cin>>n;

    
    cout<<factorial(n)<<endl;
}