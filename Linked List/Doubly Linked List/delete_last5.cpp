#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *prev ;
    Node *next;
    Node(int d){
        data = d;
        prev = NULL;
        next = NULL;
    }
};

Node *delLast(Node *head){
    if(head == NULL)
    return NULL;
    if(head == NULL){
        delete head;
        return NULL;
    }

    Node *curr = head;
    while(curr->next != 0)
        curr= curr->next;
        curr->prev->next = NULL; //we reach  the last element and then get a hold on the second last element and change it next to NULL
        delete curr;
        return head;
    
}

void printlist(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;  
    }cout<<endl;
}

int main() 
{ 
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	head=delLast(head);
	printlist(head);
	return 0;
} 
