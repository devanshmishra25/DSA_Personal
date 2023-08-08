#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        data = val;
        left  = right = NULL;
    }
};

vector<int> preorderTraversal(Node *root){
    vector<int> preorder;

    if(root == NULL)
    return preorder;

    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        preorder.push_back(root->data);

    //Below, right is put into stack first so that
    //left is on top rather than right
        if(root->right != NULL){
            st.push(root->right);
        }
        if(root->left != NULL){
            st.push(root->left);
        }
    
    }

    return preorder;

}

//Time complexity : O(N)
//Space complexity : O(N) or O(H) where H = height