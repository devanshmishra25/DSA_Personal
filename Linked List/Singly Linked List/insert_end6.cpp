#include<bits/stdc++.h>

using namespace std ; 

struct Node {

    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *insertEnd(Node *head, int x){

    //creating a new node named temp
    Node *temp = new Node(x);

    if(head == NULL)
    return temp;

    Node *curr = head;
    while(curr->next!=NULL){
        curr= curr->next;
    }
    // After the loop, we have reached the endpoint of the list
    //Now we need to add the next of the current last node to the new node
    //therefore below
    curr -> next = temp;
    return head;
}

void printlist(Node *head){
    Node *curr = head;
    while(curr =NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }

}

int main() 
{ 
	Node *head=NULL;
	head=insertEnd(head,10);
	head=insertEnd(head,20);
	head=insertEnd(head,30);
	printlist(head);
	return 0;
} 