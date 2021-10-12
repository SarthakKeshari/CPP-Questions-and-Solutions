/*
Enter your question -
#Given a doubly-linked list of positive integers. The task is to print the given doubly linked list data in reverse order.

Constraints
Number of nodes [0, 5000].
-5000 <= Node.val <= 5000

Enter link to the question(if question belongs to any online platform) -
https://www.geeksforgeeks.org/print-doubly-linked-list-in-reverse-order/

Tags for the question(eg - Array, Basic, Stack, etc.) -
LinkedList, traversal, pointers
*/

#include<stdlib.h>
#include<stdio.h>
//node creation
struct node{
    int data;
    struct node* prev;//stores address of previous node
    struct node* next;//stores address of next node
};
//assigning head as a global so that it can bes used by all the functions and we dont have to specifically call for it everytime
struct node* head;
//function to create a new node
struct node* getnewNode(int x)
{   //creating a newnode in the heap and assigning data, prev and next to it
    struct node* newNode= (struct node*)malloc(sizeof(struct node));
    newNode->data=x;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;
}
// function to enter a new element from the head of the list
void insertHead(int x)
{
    struct node* temp=getnewNode(x);
    //if the list is empty
    if(head==NULL)
    {
        head=temp;
        return;
    }
    head->prev=temp;
    temp->next=head;
    head=temp;
}
// function to enter a new element from the tail of the list
void insertTail(int x)
{
    struct node* ptr=getnewNode(x);
    struct node* temp;
    //if the list is empty
    if(head==NULL)
    {
        head=ptr;
        return;
    }
    temp = head;
    while(temp->next!=NULL)
          {
              temp = temp->next;
          }
    temp->next = ptr;
    ptr ->prev=temp;
    ptr->next = NULL;
}
// forward printing
void printforward()
{
    struct node* temp=head;
    //iterating till the ned of the list and printing the values as we go along
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void printreverse()
{
    struct node* temp=head;
    //for empty list
    if(temp==NULL)
        return;
    //traversing towards the and of the list
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    // as we reached the last node. we will traverse backwards and print the data as we go along
     while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
//driver code
int main()
{
  head=NULL;
  insertHead(2);
  insertHead(4);
  insertHead(1);
  insertTail(5);
  insertTail(7);
  printforward();//1 4 2 5 7
  printreverse();//7 5 2 4 1
}


