// Naive Approach
#include<bits/stdc++.h>


using namespace std;

int getLargest(int arr[] , int n)

{

    for (int i = 0; i < n; i++)
    {
        bool flag = true;

        for (int j = i; j < n; ++j)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }

            if (flag == true)
            {
                return i;

            }
    }

        return -1; // This line will never be reach as there always will be a largest element in an array
    }


int main()
        {
            int arr[] = {5, 8, 40, 15};

            int n = sizeof(arr)/sizeof(arr[0]);
            cout << getLargest(arr, 4,n);
            return 0;
        }