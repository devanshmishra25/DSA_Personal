#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = right = NULL;

    }
};

vector<int> inorderTraversal(Node *root){
    stack<Node*> st;
    Node *node = root;
    vector<int> inorder;
    while(true){
        if(node != NULL){
            st.push(node);
            node = node->left;

        }else{
            if(st.empty() == true)
            break;

            node = st.top();
            st.pop();
            inorder.push_back(node->val);
            node = node->right;

        }
    }
    return inorder;

}