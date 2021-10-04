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

int CountNodes(Node* root)
{
	if (!root)
		return 0;

	int a = CountNodes(root->left);
	int b = CountNodes(root->right);

	return a + b + 1;
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

	int ans = CountNodes(root);

	cout << ans;

	return 0;
}
