#include<bits/stdc++.h>
using namespace std ; 

int getMaxArea(int arr[] , int n){
    int res = 0;
    for(int i = 0; i<n; i++){
        int curr = arr[i];
        for(int j = i-1; j >=0; j--){
            if(arr[j]>=arr[i])
            curr += arr[i];
            else break;
        }

        for(int j = i+1; j<n; j++){
            if(arr[j]>= arr[i])
            curr += arr[i];
            else break;
        }

        res = max(res, curr);
    }
    return res;
}

int main() 
{ 
    int arr[]={6,2,5,4,1,5,6};
    int n=7;
    cout<<"Maximum Area: "<<getMaxArea(arr,n);
    return 0; 
}


/*The getMaxArea function takes an array arr representing the heights of bars in a histogram and the number of elements in the array n. It returns the maximum area that can be formed by a rectangle in the histogram.

Declare a variable res to store the maximum area and initialize it to 0.

Start a loop to iterate over each bar in the histogram. The loop variable i represents the current index.

Set the variable curr to the height of the current bar arr[i]. This variable will store the area of the rectangle with the current bar as its height.

Start a loop from i-1 to 0 to find the maximum width towards the left of the current bar that can be included in the rectangle. The loop variable j represents the index of the bar being checked.

Inside the loop, check if the height of the bar arr[j] is greater than or equal to the height of the current bar arr[i]. If it is, it means this bar can be included in the rectangle, so add the height of the current bar to curr. This step calculates the width of the rectangle towards the left of the current bar.

If the height of the bar arr[j] is less than the height of the current bar arr[i], it means we have reached a bar that is smaller than the current bar. In this case, we break out of the loop since we cannot extend the rectangle towards the left anymore.

Start another loop from i+1 to n-1 to find the maximum width towards the right of the current bar that can be included in the rectangle. The loop variable j represents the index of the bar being checked.

Inside the loop, similar to step 5, check if the height of the bar arr[j] is greater than or equal to the height of the current bar arr[i]. If it is, add the height of the current bar to curr. This step calculates the width of the rectangle towards the right of the current bar.

If the height of the bar arr[j] is less than the height of the current bar arr[i], break out of the loop since we cannot extend the rectangle towards the right anymore.

After both the inner loops complete, update the maximum area res by taking the maximum of the current area curr and the previous maximum area.

Return the maximum area res as the result.*/