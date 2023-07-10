// // Given two strings, we need to check if these strings are Anagram of each other or not.
// // naive method
// #include<bits/stdc++.h>
// using namespace std ;

// bool areAnagram(string &s1, string &s2, int n, int m){

//     if(n != m){
//         return false;
//     }
//        sort(s1.begin(),s1.end());
//        sort(s2.begin(), s2.end()); 
//     if(s1 == s2){
//         return true;
//     }

// }

// int main(){


//     string str1 = "abaac"; 
//     string str2 = "aacba";
//     int n = str1.length();
//      int m = str2.length();
     
//     if (areAnagram(str1, str2 , n , m)) 
//         cout << "The two strings are anagram of each other"; 
//     else
//         cout << "The two strings are not anagram of each other"; 
  
//     return 0; 
// }

//Better solution 
//Here we check increment and increment the string values as we go and at the end if
//all the char end up being 0 , then anagram 
#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
bool areAnagram(string &s1, string &s2){
    int n1 = s1.length();
    int n2 = s2.length();
     
    if(n1 != n2){
        return false;
    }

    int count[CHAR] = {0};
    for(int i = 0; i<s1.length(); i++){
        count[s1[i]]++;
        count[s2[i]]--;

    }

    for(int i = 0; i<CHAR; i++){
        if(count[i] !=0){
            return false;
        } return true;
    }
}
 
int main() 
{ 
    string str1 = "abaac"; 
    string str2 = "aacba"; 
    if (areAnagram(str1, str2)) 
        cout << "The two strings are anagram of each other"; 
    else
        cout << "The two strings are not anagram of each other"; 
  
    return 0; 
} 