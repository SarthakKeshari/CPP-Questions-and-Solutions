// 2. Calculate the sum of nodes of a binary tree

#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};

int SumOfNodes(Node* root)
{
	if (!root)
		return 0;

	int a = SumOfNodes(root->left); // Sum of left subtree
	int b = SumOfNodes(root->right); // Sum of right subtree

	return a + b + root->data;
}

int main()
{
	Node* root = new Node(15);
	root->left = new Node(8);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(11);
	root->right->left = new Node(10);
	root->right->right = new Node(7);
	root->left->right->right = new Node(6);
	root->right->right->right = new Node(7);

	int ans = SumOfNodes(root);

	cout << ans;

	return 0;
}
