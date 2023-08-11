//1. The below code without base condition , therefore stackoverflow

// #include<bits/stdc++.h>

// using namespace std;

// void f(){
//     cout<<1<<endl;
//     while()
//     f();
// }

// int main(){
//     cout<<"The output of the program is : ";
//     f();
//     return 0;
// }


//2. Base conditions:

#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void print(){
    if(cnt == 4)
        return; 

    cout<<cnt<<endl;
    cnt++;

    print();
}

int main(){
    print();
    return 0;

}

