#include <iostream>
using namespace std;

//Structure of the Node
struct Node
{
int data;

Node *next;
};

// top pointer to keep track of the top of the stack
Node *top = NULL;

//Function to check if stack is empty or not
bool isempty()
{
 if(top == NULL)
    return true; 
 
 return false;
}

//Function to insert an element in stack
void push (int value)
{
  Node *point = new Node();
  point->data = value;
  point->next = top;
  top = point;
}

//Function to delete an element from the stack
void pop ( )
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
 {
  Node *point = top;
  top = top -> next;
  delete(point);
 }
}

// Function to show the element at the top of the stack
void peek()
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
  cout<<"Element at top is : "<< top->data;
}

// Function to Display the stack
void display()
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
 {
  Node *temp=top;
  while(temp!=NULL)
  {   cout<<temp->data<<" ";
   temp=temp->next;
  }
  cout<<"\n";
 }
 }

// Main function
int main()
{

 int choice, flag=1, value;

 //Menu Driven Program using Switch
 while( flag == 1)
 {
 cout<<"\n1.Push\n 2.Pop\n 3.peek\n 4.display\n 5.exit\n";
 cin>>choice;
 switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         push(value);
         break;
 case 2: pop();
         break;
 case 3: display();
         break;
 case 4: peek();
         break;
 case 5: flag = 0;
         break;
 }
 }

return 0;
}
