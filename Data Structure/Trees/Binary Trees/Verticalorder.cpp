//Print the Vertical order traversal of binary tree and Print the Top view of binary tree and Print Bottom view of binary tree.
#include<bits/stdc++.h>
using namespace std;
// structure of Node
struct Node
{
	int data; 
	int hd; 
	Node *left, *right; 

	Node(int key)
	{
		data = key;
		hd = 0;
		left = right = NULL;
	}
};

void getVerticalOrder(Node* root, int hd, map<int, vector<int>> &m)
{
    if (root == NULL)
        return;
    m[hd].push_back(root->data); // push node in map
    getVerticalOrder(root->left, hd-1, m); // push nodes in left subtree
    getVerticalOrder(root->right, hd+1, m); // push nodes in right subtree
}
 
// function to print vertical order of a binary tree

void printVerticalOrder(Node* root)
{
    map < int,vector<int> > m;
    int hd = 0;
    getVerticalOrder(root, hd,m);
 
    // Traverse the map and print nodes at every horizontal
    map< int,vector<int> > :: iterator it;
    for (it=m.begin(); it!=m.end(); it++)
    {
        for (int i=0; i<it->second.size(); ++i)
            cout << it->second[i] << " ";
        cout << endl;
    }
}
 

// Function to print Bottom view
void bottomView(Node *root)
{
	if (root == NULL)
		return;

	int hd = 0;
	map<int, int> m;

	queue<Node *> q;
	root->hd = hd;
	q.push(root);

	while (!q.empty())
	{
		Node *temp = q.front();
		q.pop(); 

		hd = temp->hd;

		m[hd] = temp->data;

		if (temp->left != NULL)
		{
			temp->left->hd = hd-1;
			q.push(temp->left);
		}

		if (temp->right != NULL)
		{
			temp->right->hd = hd+1;
			q.push(temp->right);
		}
	}

	for (auto i = m.begin(); i != m.end(); i++)
		cout << i->second << " ";
}

// Top viewvoid topView(Node* root)
void topView(Node* root)
{
    if (root == NULL)
        return;
    queue<Node*> q;
    map<int, int> m;
    int hd = 0;
    root->hd = hd;

    q.push(root);
 
    while (q.size()) {
        hd = root->hd;
 
        if (m.count(hd) == 0)
            m[hd] = root->data;
        if (root->left) {
            root->left->hd = hd - 1;
            q.push(root->left);
        }
        if (root->right) {
            root->right->hd = hd + 1;
            q.push(root->right);
        }
        q.pop();
        root = q.front();
    }
 
    for (auto i = m.begin(); i != m.end(); i++) {
        cout << i->second << " ";
    }
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
    cout<<endl<<"Vertical Order of Binary Tree "<<endl;
    printVerticalOrder(root);
    cout<<endl<<endl<<"Top view of Binary Tree "<<endl;
    topView(root);
    cout<<endl<<endl<<"Bottom view of Binary Tree "<<endl;
    bottomView(root);

    return 0;
}
