// #include<bits/stdc++.h>

// using namespace std; 

// int main(){
//     string s;
//     cin>>s;

//     //pre fetch
//     int hash[26] = {0};
//     for(int i = 0; i<s.size(); i++){
//         hash[s[i] - 'a']++;
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;
//         //fetch

//         cout<<hash[c-'a']<<endl;

//     }
// }

//------------------------------------------------------------------------------------------------------------------------------------------------------

//Map

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    //pre compute

    map<int, int>mpp;
    for(int i = 0; i<n;i++){
        mpp[arr[i]]++;

    }

    //iterater in the map

    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;

    }
    return 0;
}

