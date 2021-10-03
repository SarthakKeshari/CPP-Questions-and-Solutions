//You are given a number representing the level number you have to determine the sum of all nodes at that level.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//Binary Tree Node
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

//Function for level order traversal og binary tree
int levelorderSum(Node* root,int k)
{
    if(root==NULL) 
    {
        return -1;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int level=0;
    int sum=0;
    while(!q.empty())
    {
        Node* node=q.front();
        q.pop();
        
        if(node!=NULL)
        {
            if(level==k)  //if level is K then it into sum
            {
                sum+=node->data;
            }
            // Add right node to queue
            if(node->left!=NULL)
            {
                q.push(node->left);
            }
            // Add right node to queue
            if(node->right!=NULL)
            {
                q.push(node->right);
            }
        }
        
        else if(!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}


//driver code
int main()
{
    
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->left->left=new Node(9);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->left->left->left->right=new Node(9);
    root->left->right->left=new Node(5);
    root->right->left->right=new Node(6);
    int k;
    cout<<"Enter the level of Tree"<<endl;
    cin>>k;
    cout<<"Sum"<<" "<<levelorderSum(root,k)<<endl;

    return 0;
}
