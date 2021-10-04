// Code to reverse K nodes in a Linked List 

#include<iostream>
using namespace std;

// Structure of Node of Linked List
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

// Function to insert nodes in the Linked List
void insertNodeAtTail(node* &head, int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

// Function to display the nodes of the Linked List
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    cout<<endl;
}

// Function to reverse K nodes in the Linked List 
node* reverseKNodes(node* &head, int k)
{
    node* next;
    node* previous=NULL;
    node* current = head;
    int count=0;
    while(current!=NULL && count<k)
    {
        next=current->next;
        current->next=previous;

        previous=current;
        current=next;

        count++;
    }

    if(next!=NULL)
    {
        head->next=reverseKNodes(next, k);
    }
    return previous;
}

int main()
{
    node* head = NULL;
    insertNodeAtTail(head, 1);
    insertNodeAtTail(head, 2);
    insertNodeAtTail(head, 3);
    insertNodeAtTail(head, 4);
    insertNodeAtTail(head, 5);
    insertNodeAtTail(head, 6);
    insertNodeAtTail(head, 7);
    insertNodeAtTail(head, 8);
    display(head);
    int k;
    cout<<"Enter value of K: "<<endl;
    cin>>k;
    node* newHead = reverseKNodes(head, k);
    display(newHead);
}