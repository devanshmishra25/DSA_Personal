#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n ; i++) //this shows the passes we have to go through
    {
        for(int j = 0; j < n - i - 1; j++){
            if( arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
	int a[] = {2, 1, 3, 4};
	bubbleSort(a, 4);
	for(int i = 0;i < 4; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}