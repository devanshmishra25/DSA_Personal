#include<bits/stdc++.h>
using namespace std;

int first(int arr[], int n, int target){

    int low = 0;
    int high = n - 1;

    int res = -1;

    while(low<=high){

        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            res = mid;
            high = mid - 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;

        }else{
            high = mid - 1;
        }
    }

    return res;

}


    int main() {
    
    int arr[] = {5, 10, 10, 10, 20}, n = 5;

	int target = 20;
	
	cout<<first(arr, n, target);
	return 0;
}

