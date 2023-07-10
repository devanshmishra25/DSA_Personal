// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     char str[] = "gfg";

//     cout<<str;
//     return 0;
// }


// ----------------------------------------------------------------
// #include<iostream>

// using namespace std ;

// int main(){

//     char str[] = {'g' , 'f' , 'g'};

//     cout<<str;
//     return 0;
// }

// -----------------------------------------------------------------

// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     char str[] = "gfg";

//     cout<<strlen(str);
//     return 0;
// }

// -----------------------------------------------------------------


// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     string str = "gfg";

//     cout<<str.length();
//     return 0;
// }

// -----------------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std ;

// int main() {

//     char s1[] = "abc";
//     char s2[] = "bcd";
    
//     int res = strcmp(s1,s2);
//     if(res>0){
//         cout<<"greater";

//     }else if(res == 0){
//         cout<<"Same";

//     }else 
//     {
//         cout<<"smaller";
//     }
    
// }

// -----------------------------------------------------------------

// C++ style strings

// #include<bits/stdc++.h>

// using namespace std; 

// int main() {
   
//    string str = "geekforgeeks";

//    cout<<str.length()<<" "<<endl;
//    str = str + "xyz";
//    cout<<str<<" "<<endl;
//    cout<<str.substr(1,3)<<" "<<endl;
//    cout<<str.find("eek")<<" "<<endl;

// //eek is found twice in the string therefore it gives the index of the
// //of the first occurence that is index 1

//    return 0;


// }

// -----------------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std ;

// int main(){

//     string s1 = "abc";
//     string s2 = "bcd";

//     if(s1 == s2){
//         cout<<"Equal";

//     }else if(s1<s2){
//         cout<<"Smaller";
//     }else{
//         cout<<"Greater";
//     }
// }

// ----------------------------------------------------------------

// #include<bits/stdc++.h>

// using namespace std; 

// int main() {
//     string str; 
//     cout<<"Enter your name ";
//     // cin>>str; //this will just give devansh as output and not add mishra

//     getline(cin, str);

//     cout<<"Your name is "<<str;

// }

// ----------------------------------------------------------------


// iterating through the string

#include<bits/stdc++.h>
using namespace std; 
int main(){
string str = "geekforgeeks";
for(int i = 0; i<str.length(); i++){
    cout<<str[i];
    

    // can also use for each loop 
    // for(char x : str){
    //     cout<<x
    // }
}
}