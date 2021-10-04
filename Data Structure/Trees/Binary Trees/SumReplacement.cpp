//Given a Binary Tree where each node has value. Convert this to a tree where each node contains the sum of the left and right sub trees in the original tree.
#include "bits/stdc++.h"
using namespace std;
//Node structure
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
 // Function to perform sumreplacement
void sumreplacement(Node* root)
{
    if(root==NULL)    //base case if root is NULL
    {
        return;
    }
    sumreplacement(root->left);       //Recursion for left part
    sumreplacement(root->right);     //Recursion for Right part
    if(root->left!=NULL)
    {
        root->data+=root->left->data;            //ADD LEFT PART TO ROOT NODE
    }
    if(root->right!=NULL)
    {
        root->data+=root->right->data;               //ADD RIGHT PART TO ROOT NODE
    }
}
// Function to print Ionorder Sequence of binary Tree
void inorder(Node* root)
{
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//Driver Function
int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(9);
    root->left->left->left=new Node(9);
    root->left->right=new Node(78);
    root->right->left=new Node(6);
    root->left->right->left=new Node(9);
    root->right->left->right=new Node(7);
    cout<<endl <<"Inorder Sequence of Binary tree Before Sum Replacement"<<endl;
    inorder(root);
    sumreplacement(root);
    cout<<endl <<"Inorder Sequence of Binary tree After Sum Replacement"<<endl;
    inorder(root);

    return 0;
}
