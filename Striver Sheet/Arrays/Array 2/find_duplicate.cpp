#include<bits/stdc++.h>

using namespace std;

int findDup(vector<int> &nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i = 0; i<n; i++){
        if(nums[i] == nums[i+1])
        return nums[i];
        
    }
}

int main(){

    vector < int > nums;
    nums = {1,3,4,2,2};
    cout << "The duplicate element is " << findDup(nums) << endl;
}