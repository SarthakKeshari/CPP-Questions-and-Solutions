// Question : Append Last N To First

#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    //Constructor 
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAtTail(node*&head,int data)//function to insert new element at tail of the list
{
    if(head == NULL){
        head = new node(data);
        return;
    }
    node *tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
}

int buildList(node*&head)//function to build the list.
{
    int n;
    cout<<"Enter the size of list:";
    cin>>n;
    cout<<endl;
    int a=n;
    cout<<"<span style="color:#99cc00;">Enter data of the nodes\n";
    while(n--){
        int data;
        cin>>data;
        insertAtTail(head,data);//New element will be inserted at end.
    }
    return a;
}

void printList(node*head)//function to print linked list.
{
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    printList(head->next);
}

node* append(node*head,int k,int n)//function to find last n nodes
{
    node*last;
    last = head;
    int i=0;
    int ok = n-k-1; 
    while(last != NULL && i<ok)
    {
        last = last -> next;
       i++;
    }
    node*second = last->next;
    last->next = NULL;
    return second;
}

int main() //main function
{
    int k;
    node* head = NULL;
    int n = buildList(head);
    cout<<"Linked list data: ";
    printList(head);
    cout<<"\nEnter the value of 'n': ";
    cin>>k;
    node* temp = append(head,k,n);
    cout<<"\nAfter appending the last n nodes of a linked list to the beginning of the list\n";
    cout<<"Linked list data: ";
    printList(temp);// printing last n nodes
    printList(head);//printing remaining nodes
}