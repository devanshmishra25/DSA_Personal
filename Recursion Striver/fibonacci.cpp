//you will be given a number N and will be asked to find the Nth fibonacci number


#include<bits/stdc++.h>
using namespace std;

int fibonacci(int N){
    if(N<=1){
        return N;
    }

    int last  = fibonacci(N-1);
    int secondLast = fibonacci(N-2);

        return last + secondLast;
}

int main(){
    int N = 8;
    
    cout<<fibonacci(N)<<endl;
    return 0;

}


