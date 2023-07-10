#include<bits/stdc++.h>

using namespace std; 

int main()
{
    
    string str = "geekforgeeks";
    int count[26] = {0};
    for(int i = 0; i<str.length(); i++){

        //what the below does is that it gets the index
        //for the character we want in he str and the n increments 
        //its value 
        count[str[i] - 'a']++;
    }

    for(int i = 0; i<26; i++){
        if(count[i]>0){
            cout<<char(i + 'a')<< " "<<count[i]<<endl;
        }
    }

}