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

vector<vector<int>> levelOrder(Node* root){
    
    //The below is the datastructure we need to store the level order traversal
    //Line by line . therefore vector of vector
    vector<vector<int>> ans; 
    if(root == NULL)
    return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i = 0; i<size; i++){
            Node *node = q.front();
            q.pop();
            if(node->left != NULL)
                q.push(node->left);

            if(node->right != NULL)
                q.push(node->right);   
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;


}