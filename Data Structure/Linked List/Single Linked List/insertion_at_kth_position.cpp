#include<bits/stdc++.h>
using namespace std;
class node
{
  public:
    int data;
    node* next;
};
node* head;
void insert_at_end(int val)
{
   node* newnode=new node;
   node* temp=head;
  newnode->data=val;
   newnode->next=NULL;
  if(head==NULL)
  {
      head=newnode;
      return;
  }
  else
  {
      while(temp->next!=NULL)
        {
            temp=temp->next;

      }
      temp->next=newnode;
      return;
  }
}
void insert_at_pos(int pos,int val)
{
  node* newnode=new node;
  node* temp=head;
  newnode->data=val;
  int i=0;
  if(head==NULL)
  {
      head=newnode;
      return;
  }
  if(pos==0)
  {
      newnode->next=head;
  head=newnode;
  }

  else
  {
      while(i!=pos-1)
      {
          temp=temp->next;
          i++;
      }
      newnode->next=temp->next;
      temp->next=newnode;
      return;
  }


}
void display()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
  int n;
  cout<<"enter size:";
  cin>>n;
  cout<<"enter Linked list ";
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    insert_at_end(x);
  }
  cout<<"OLD LINKED LIST:\n";
  display();
  int k,l;
  cout<<"\nEnter index and element: ";
  cin>>k>>l;
  insert_at_pos(k,l);
  cout<<"NEW LINKED LIST:\n";
  display();

}
