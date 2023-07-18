//Given a number n , print first n numbers (in increasing order) such that all these numbers have digits in set {5,6}

#include<bits/stdc++.h>
using namespace std; 

void printFirstN(int n){
    queue<string> q;

    q.push("5");
    q.push("6");

    for(int i = 0; i<n; i++){
        string curr = q.front();
        cout<<curr<<" ";
        q.pop();

        q.push(curr + "5");
        q.push(curr + "6");
    }
}

int main(){
    int n = 15;
    printFirstN(n);
}