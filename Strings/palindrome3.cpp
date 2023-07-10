#include<iostream>
#include<string>

using namespace std; 

bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;
    while(left<right){
        if(str[left] != str[right]){
            return false;
        }else{
           left ++;
         right --; 
        }
        return true;
    }
    
}

int main() {
    string str;
    cout<<"Enter the string ";
    // cin>> str;
    getline(cin, str);
    if(isPalindrome(str)){
        cout<<str<< " is a palindrome."<<endl;
    }else{
        cout<< str << " is not a palindrome."<<endl;
    }
}