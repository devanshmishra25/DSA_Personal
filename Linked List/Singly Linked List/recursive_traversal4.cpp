#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    
};

void rPrint(Node *head){
    if(head == NULL){
        return;
    }else{
        cout<<head->data<<" ";
        rPrint(head->next);
    }
}

int main() {
    Node* head = new Node{1, new Node{2, new Node{3, nullptr}}};
    rPrint(head);
    return 0;
}

takes auxillary space 