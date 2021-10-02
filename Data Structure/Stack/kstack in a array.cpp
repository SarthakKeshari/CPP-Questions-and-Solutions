//KSTACKS IN A ARRAY WITH DYNAMIC ALLOCATION
#include<bits/stdc++.h>
using namespace std;

class kstack{                           //CLASS CREATED FOR STACK IS CREATED.
    int *arr;
    int *top;
    int *next;
    int n,k,z;
    public:
        kstack(int n,int k);
        void push(int sn,int x);
        void pop(int sn);
        void display(int sn);
        void peek(int sn);
};

kstack::kstack(int n,int k){        //CONSTRUCTOR INITIALIZES VARIABLES n(SIZE OF ARRAY) AND k(NUMBER OF STACKS) z gives the free space in array to insert the value.
    this->n=n;
    this->k=k;
    arr=new int[n];
    top=new int[k];                 //TOP ARRAY STORES THE INDEX VALUES OF THE TOP ELEMENT OF THE STACK.
    next=new int[n];                //NEXT ELEMENT STORES THE INDEX WHICH IS EMPTY.
    z=0;
    for(int i=0;i<n-1;i++){         //ONLY TILL N-1 IS INITIALIZED AS LAST INDEX HAS NO INDEX FREE AFTER IT
        next[i]=i+1;
    }
    next[n-1]=-1;
    for(int i=0;i<k;i++){           //INITIALIZING TOP OF ALL STACK AS -1
        top[i]=-1;
    }
}

void kstack::push(int sn,int x){
    if(z==-1){
        cout<<"STACK OVERFLOWED!!"<<endl;
        return;
    }else{
        int i=z;                 // INDEX FREE IS GIVEN TO I;
        z=next[i];              //  NEXT ELEMET FREE IS GIVEN TO Z
        next[i]=top[sn];        // Previous top is assigned to current index
        top[sn]=i;              // current index is assigned to top of STACK
        arr[i]=x;               // value inserted
    }
}

void kstack::pop(int sn){           //Takes stack number as input
    if(top[sn]==-1){
        cout<<"STACK UNDERFLOW!!!"<<endl;
    }
    else{
        int i=top[sn];          //top pointing to index is assingned to i.
        top[sn]=next[i];        //next element in stack top is passed.
        cout<<"THE POPPPED ELEMENT FROM STACK "<<sn+1<<" IS:"<<arr[i]<<endl;
        next[i]=z;              //next free slot value passed in next i.
        z=i;                    //current i value is given to z.
    }
}

void kstack::peek(int sn){
    if(top[sn]==-1){
        cout<<"STACK UNDERFLOW!!!"<<endl;
    }else{
        cout<<"THE PEEK ELEMENT FROM STACK "<<sn+1<<" IS:"<<arr[top[sn]]<<endl;
    }
}

void kstack::display(int sn){
    if(top[sn]==-1){
        cout<<"STACK UNDERFLOW!!!"<<endl;
    }else{
        int k=top[sn];      //Access the previous elements using value stored in next array.
        cout<<"THE ELEMENTS FORM STACK "<<sn+1<<" IS:";
        while(k!=-1){
            cout<<arr[k]<<" ";
            k=next[k];
        }
        cout<<endl;
    }
}

int main(){
    int k=3,n=9;            
    kstack m(9,3);          //Input are given
    m.push(0,1);            //Pushing and poping various functions are performend.
    m.push(0,11);
    m.push(0,21);
    m.push(0,31);
    m.push(1,2);
    m.push(1,22);
    m.push(2,3);
    m.push(2,13);
    m.push(2,23);
    m.push(1,32);
    m.display(0);
    m.display(1);
    m.display(2);
    m.pop(2);
    m.pop(0);
    m.push(2,33);
    m.push(2,43);
    m.push(0,41);
    m.display(0);
    m.display(1);
    m.display(2);
    m.peek(2);
}