#include<iostream>
using namespace std;

class Stack{
    private:
        int top;
        int *arr;
        int cap;
    public:
        Stack(){
            cout<<"ENTER THE CAPACITY:";
            cin>>cap;
            top=-1;
            arr=new int[cap];
        }
        void push(int x);
        int pop();
        void peek();
        int isEmpty();
        void size();
        void display();
};

void Stack::push(int x){
    if(top==cap-1){
        cout<<"SYSTEM WILL OVERFLOW!!"<<endl;
    }else{
        top++;
        arr[top]=x;
    }
}

int Stack::pop(){
    int x=-1;
    if(top==-1){
        cout<<"SYSTEM WILL UNDERFLOW!!"<<endl;
    }else{
        x=arr[top];
        top--;
    }
    return x;
}

void Stack::peek(){
    cout<<"THE PEEKED ELEMENT IS:";
    if(top==-1){
        cout<<"SYSTEM UNDERFLOW!!!"<<endl;
    }else{
        cout<<arr[top]<<endl;
    }
}

int Stack::isEmpty(){
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}

void Stack::size(){
    if(top==-1){
        cout<<"THE STACK IS EMPTY"<<endl;
    }
    else{
        cout<<"SIZE OF STACK IS:"<<top+1<<endl;   
    }
}

void Stack::display(){
    cout<<"THE ELEMENTS ARE:";
    if(top==-1){
        cout<<"STACK IS EMPTY!!"<<endl;
    }else{
        for(int i=top;i>-1;i--){
            cout<<arr[i]<<"|";
        }
        cout<<endl;
    }
}

int main(){
    Stack s;
    for(int i=1;i<11;i++){
        s.push(i);
    }
    s.peek();
    s.size();
    s.push(11);
    int x=s.pop();
    cout<<"THE POPPED ELEMENT IS:"<<x<<endl;
    x=s.pop();
     cout<<"THE POPPED ELEMENT IS:"<<x<<endl;
     s.push(12);
     s.display();
     s.size();
}