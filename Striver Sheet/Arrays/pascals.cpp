//finding nCr in minimal time
//Use the formula of nCr (shortcut) which you always use

#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
    long long res = 1;
    for(int i = 0; i<r; i++){
        res = res * (n-1);
        res = res/(i+1);
    }

    return res;

}

//the above method is extreme brute force and
// the time complexity is O(r) and sc is O(n)

//-------------------------------------------------------------------------------------------

//given Nth row, print all the elements in that row 

#include<bits/stdc++.h>
using namespace std;

//psuedo code

for(c = 1; c<=n; c++){
    //column starts from 1st column and goes uptil number of rows because
    //if we are given the nth row to be found, we know that in that row there will be n elements.
    
}