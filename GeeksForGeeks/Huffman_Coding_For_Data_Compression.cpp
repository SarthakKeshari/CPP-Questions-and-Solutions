

/*

Huffman coding is a lossless data compression algorithm. 
The idea is to assign variable-length codes to input characters, lengths of the assigned codes are based on the frequencies of corresponding characters. 
The most frequent character gets the smallest code and the least frequent character gets the largest code.
Create a program that uses min heap to get the huffman tree and the data should be user inputed.

*/

#include <bits/stdc++.h>
using namespace std;
struct node
{

	// Frequency of char
	int data;
	// char
	char ch;
	// Left Pointer in Huffman tree
	struct node *left;
	// Right point in Huffman tree
	struct node *right;
};

// Function to create a new node
struct node *newNode(int x, char chh)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = x;
	temp->ch = chh;
	temp->left = temp->right = NULL;
	return temp;
}

// Traverse tree to get the corresponding code for each char.
void print(struct node *node, string str)
{
	// If node is leaf node then print char along with its code.
	if (node->left == NULL && node->right == NULL)
	{
		if (node->ch != '#')
		{

			cout << node->ch << ": " << str << endl;
		}
		return;
	}
	// Assign 0 to left edge and recur
	if (node->left)
	{
		print(node->left, str + '0');
	}
	// Assign 1 to right edge and recur
	if (node->right)
	{
		print(node->right, str + '1');
	}
}
int main()
{
	// your code goes here
	int n, i, x;
	cin >> n;
	char ch;

	set<pair<int, struct node *>> s;
	for (i = 0; i < n; i++)
	{
		cin >> ch >> x;
		//   Make a new node of each and every given char and insert it in set s.
		struct node *newnode = newNode(x, ch);
		s.insert({x, newnode});
	}

	// Loop if set contains more than one element.
	while (s.size() > 1)
	{
		// Smallest element is at p
		pair<int, struct node *> p = *s.begin();
		struct node *left = p.second;
		s.erase(s.begin());
		// Second smallest element is at q
		pair<int, struct node *> q = *s.begin();
		struct node *right = q.second;
		s.erase(s.begin());

		// Make a new node with data is equal to the sum of data of p and q.
		struct node *newnode = newNode((left->data + right->data), '#');
		newnode->left = left;
		newnode->right = right;
		// Insert it in set s for further building of Huffman tree
		s.insert({(left->data + right->data), newnode});
	}

	//  Last element in set is the root of the Huffman tree.
	pair<int, struct node *> p = *s.begin();
	struct node *root = p.second;
	// Calling print function
	print(root, "");
	return 0;
}
