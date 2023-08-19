#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& A) {
    int ind = -1;
    int n = A.size();

    for(int i = n - 2; i >= 0; i--) {
        if(A[i] < A[i+1]) {
            ind = i;
            break;
        }
    }

    if(ind == -1) {
        reverse(A.begin(), A.end());
    } else {
        for(int i = n - 1; i > ind; i--) {
            if(A[i] > A[ind]) { // Changed 'nums' to 'A'
                swap(A[i], A[ind]);
                break;
            }
        }
        reverse(A.begin() + ind + 1, A.end());
    }
}

int main() {
    vector<int> A = {2, 1, 5, 4, 3, 0, 0}; // Changed array to vector
    nextPermutation(A); // Call the function to modify the vector
    for(int num : A) {
        cout << num << " ";
    }
    return 0;
}
