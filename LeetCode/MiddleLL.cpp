//https://leetcode.com/problems/middle-of-the-linked-list/

#include <iostream>
using namespace std;
class Node{//creating node
	public:
		int data;
		Node *next;
};
class NodeOperation{
public:
	void pushNode(class Node** head_ref,int data_val){//adding elements to linked list
		class Node *new_node = new Node();
		new_node->data = data_val;
		new_node->next = *head_ref;
		*head_ref = new_node;
	}
  
	void printNode(class Node *head){//printing linked list
		while(head != NULL){
			cout <<head->data << "->";
			head = head->next;
		}
		cout << "NULL" << endl;
	}
	
	void printMiddle(class Node *head){//code to print the middle of linked list
		struct Node *slow_ptr = head;
		struct Node *fast_ptr = head;
		if (head!=NULL)
		{
			while (fast_ptr != NULL && fast_ptr->next != NULL)
			{
				fast_ptr = fast_ptr->next->next;
				slow_ptr = slow_ptr->next;
			}
			cout << "The middle element is [" << slow_ptr->data << "]" << endl;
		}
	}
};

int main(){//main function
	class Node *head = NULL;
	class NodeOperation *temp = new NodeOperation();
	for(int i=5; i>0; i--){//control loop to push elements into array
		temp->pushNode(&head, i);
		temp->printNode(head);
		temp->printMiddle(head);
	}
	return 0;
}
