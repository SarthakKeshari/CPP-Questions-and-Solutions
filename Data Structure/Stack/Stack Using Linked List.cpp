// Stack implements the LIFO mechanism i.e. the element that is pushed at the end is popped out first. 
// Question: A program that implements a stack using linked list.

#include <iostream>
using namespace std;

//the structure Node is used to create the linked list that is implemented as a stack
struct Node {
   int data;
   struct Node *next;
};

//The push() function takes argument val i.e. value to be pushed into the stack. Then a new node is created and val is inserted into the data part. This node is added to the front of the linked list and top points to it.

struct Node* top = NULL;
void push(int val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}


//the pop() function pops the topmost value of the stack, if there is any value. If the stack is empty then underflow is printed.

void pop() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}

//The display() function displays all the elements in the stack. This is done by using ptr that initially points to top but goes till the end of the stack. All the data values corresponding to ptr are printed.

void display() {
   struct Node* ptr;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}

//The function main() provides a choice to the user if they want to push, pop or display the stack.

int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}