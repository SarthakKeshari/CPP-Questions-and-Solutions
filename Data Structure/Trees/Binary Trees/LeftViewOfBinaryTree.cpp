#include <bits/stdc++.h>
using namespace std;
 
// Data ure to store a binary tree node
class  Node
{
    public:
    int key;
    Node *left, *right;
 
    Node(int key)
    {
        this->key = key;
        this->left = this->right = NULL;
    }
};
 

 Node* newNode(int value)
{
    Node* n = new Node(value);
    n->key = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}
 
 Node* insertValue( Node* root, int value,
                         queue<Node *>& q)
{
    Node* node = newNode(value);
    if (root == NULL)
        root = node;
 
    // The left child of the current Node is
    // used if it is available.
    else if (q.front()->left == NULL)
        q.front()->left = node;
 
    // The right child of the current Node is used
    // if it is available. Since the left child of this
    // node has already been used, the Node is popped
    // from the queue after using its right child.
    else {
        q.front()->right = node;
        q.pop();
    }
 
    // Whenever a new Node is added to the tree, its
    // address is pushed into the queue.
    // So that its children Nodes can be used later.
    q.push(node);
    return root;
}
 
// This function mainly calls insertValue() for
// all array elements. All calls use same queue.
Node* createTree(int arr[], int n)
{
    Node* root = NULL;
    queue<Node*> q;
    for (int i = 0; i < n; i++)
      root = insertValue(root, arr[i], q);
    return root;
}
 
// Iterative function to print the left view of a given binary tree
void leftView(Node* root)
{
    // return if the tree is empty
    if (root == nullptr) {
        return;
    }
 
    // create an empty queue and enqueue the root node
    list<Node*> queue;
    queue.push_back(root);
 
    // pointer to store the current node
    Node* curr = nullptr;
 
    // loop till queue is empty
    while (!queue.empty())
    {
        // calculate the total number of nodes at the current level
        int size = queue.size();
        int i = 0;
 
        // process every node of the current level and enqueue their
        // non-empty left and right child
        while (i++ < size)
        {
            curr = queue.front();
            queue.pop_front();
 
            // if this is the first node of the current level, print it
            if (i == 1) {
                cout << curr->key << " ";
            }
 
            if (curr->left) {
                queue.push_back(curr->left);
            }
 
            if (curr->right) {
                queue.push_back(curr->right);
            }
        }
    }
}
 void levelOrder( Node* root)
{
    if (root == NULL)
        return;
    queue<Node*> n;
    n.push(root);
    while (!n.empty()) {
        cout << n.front()->key << " ";
        if (n.front()->left != NULL)
            n.push(n.front()->left);
            
        if (n.front()->right != NULL)
            n.push(n.front()->right);
           
        n.pop();
    }
}
int main()
{
    int n;
    cout<<"\n\nEnter the number of node in binary tree: ";
    cin>>n;
    int A[n];
    cout<<"Enter the nodes of binary tree: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    } 
     Node* root = createTree(A, n);
     cout<<"level order traversal of binary tree: ";
     levelOrder(root);
     cout<<"\nLeft of binary tree: ";
    leftView(root);
    cout<<"\n\n";
    return 0;
}


