//Naive 

#include<bits/stdc++.h>
using namespace std ;

int leftMost(string &s){

    for(int i = 0; i<s.length(); i++){
        for(int j = 1+1; j,s.length(); j++){
            if(s[i] == s[j])
            return i;
            
        
    }
}
return -1;
}
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost repeating character:"<<endl;
    cout<<leftMost(str)<<endl;  
    
    return 0; 
}
