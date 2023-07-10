#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *delHead(Node *head){
    if(head == NULL)
    return NULL;
    else{
        //assigning temp to the next value after the head which is 20 here
        Node* temp = head->next;
        delete(head);//then delete 10
        return temp;//make 20 as the new head
    }
}

void printList(Node *head){
    Node *curr = head;// assign a pointer curr to the head of the new list which is 20
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;

    }
    
}
int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printList(head);
	head=delHead(head);
	printList(head);
	
	return 0;
} 