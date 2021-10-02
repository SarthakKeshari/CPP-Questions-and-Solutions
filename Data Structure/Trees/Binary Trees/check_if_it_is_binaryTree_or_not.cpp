 // CPP program to construct a binary tree in level order.
#include <bits/stdc++.h>
using namespace std;

// Data structure to store a binary tree node
class Node
{
    public:
    int key;
    Node *left, *right;
 
    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};
 
// Function to create a node with 'value' as the data
// stored in it.
// Both the children of this new Node are initially null.
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

// This is used to verify the logic.
void levelOrder(Node* root)
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
// Iterative function to check if two given binary trees are identical or not
bool isIdentical(Node* x, Node* y)
{
    // if both trees are empty, return true
    if (x == nullptr && y == nullptr) {
        return true;
    }
 
    // if the first tree is empty (and the second tree is non-empty), return false
    if (x == nullptr) {
        return false;
    }
 
    // if the second tree is empty (and the first tree is non-empty), return false
    if (y == nullptr) {
        return false;
    }
 
    // create a stack to hold `Node*` pairs
    stack<pair<Node*, Node*>> stack;
    stack.push({x, y});
 
    // loop till stack is empty
    while (!stack.empty())
    {
        // pop the top pair from the stack and process it
        Node* x = stack.top().first;
        Node* y = stack.top().second;
        stack.pop();
 
        // if the value of their root node doesn't match, return false
        if (x->key != y->key) {
            return false;
        }
 
        // if the left subtree of both `x` and `y` exists, push their addresses
        // to stack; otherwise, return false if only one left child exists
        if (x->left && y->left) {
            stack.push({x->left, y->left});
        }
        else if (x->left || y->left) {
            return false;
        }
 
        // if the right subtree of both `x` and `y` exists, push their addresses
        // to stack; otherwise, return false if only one right child exists
        if (x->right && y->right) {
            stack.push({x->right, y->right});
        }
        else if (x->right || y->right) {
            return false;
        }
    }
 
    // we reach here if both binary trees are identical
    return true;
}
 
// Driver code
int main()
{
	int n;
    cout<<"\n\nenter the number of node in first tree: ";
    cin>>n;
    int arr[n];
    cout<<"\nenter the node of binary tree: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	Node* root = createTree(arr, n);
    cout<<"\nFirst binary tree: ";
	levelOrder(root);
	int n2;
    cout<<"\n\nenter the number of node in second tree: ";
    cin>>n2;
    int arr2[n2];
    cout<<"\nenter the node of binary tree: ";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
	Node* root2 = createTree(arr2, n2);
    cout<<"\nsecond binary tree: ";
	levelOrder(root2);
    cout<<endl<<endl;
    if (isIdentical(root, root2)) {
        cout << "The given binary trees are identical";
    }
    else {
        cout << "The given binary trees are not identical";
    }
    cout<<endl<<endl;
    return 0;
}
	