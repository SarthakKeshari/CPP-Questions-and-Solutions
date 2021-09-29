//CHECK FOR BALANCED PARENTHESIS USING MANUAL STACK

#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:                                     //MAKING ALL THE VARIABLES ANF FUNCTION PUBLIC
        int top;                                
        int cap;
        char *arr;
        Stack(int x){                           //INTILASING THE VARIABLES
            top=-1;
            cap=x;
            arr=new char[cap];                  //CREATING ARRAY
        }
        void push(char s);
        void pop();
        char peek();
};

void Stack:: push(char s){
    if(top==cap-1){
        cout<<"STACK OVERFLOWED!!!"<<endl;      //IF CAPACITY OF STACK IS MAX THEN NO MORE ELEMENTS CAN BE INSERTED
    }else{
        top++;                                  //INCREMENTING TOP
        arr[top]=s;                             //INSERTING VALUES INTO STACK USING TOP
    }
}

void Stack:: pop(){                             //CREATING A POP FUNCTION TO DELETE TOP ELEMENT IN STACK.
    if(top==-1){                                //IF NO ELEMENT IS PRESENT IN THE STACK SO THIS PRINT FUNCTION IS EXECUTED
        cout<<"STACK UNERFLOW!!!"<<endl;
    }else{
        char x=arr[top];                        //REMOVING TOP ELEMENT FROM THE STACK!!;
        top--;                                  //DECREMENTING THE TOP
    }
}

char Stack:: peek(){                            
    if(top==-1){
        cout<<"STACK UNERFLOW!!!"<<endl;
        return 'a';                             //RETURNING A CHAR IF STACK IS EMPTY
    }
    return arr[top];                            //RETURNING A ELEMENT
}

int main(){
    string s;
    cout<<"ENTER THE STRING:";
    cin>>s;
    Stack st(s.length());
    int n=s.length();
    char c[n];
    strcpy(c, s.c_str());;
    for(int i=0;i<n;i++){
        if(c[i]=='{' || c[i]=='[' || c[i]=='('){        //INSERTION INTO THE STACK
            st.push(c[i]);
        }
        else{
            if(c[i]=='}' && st.peek()=='{' || c[i]==']' && st.peek()=='[' || c[i]==')' && st.peek()=='('){ //IF PAIR IS AVIALABLE THEN POP THE ELEMENT OUT
                st.pop();
            }else{
                cout<<"NOT BALANCED!!!"; //IF PEEK ELEMENT IS NOT SAME AS ASPIRED FOR
                exit(0);
            }
        }
    }
    if(st.top==-1){
        cout<<"BALANCED"<<endl;
    }
    else{
        cout<<"NOT BALANCED"<<endl; //IF STACK IS NOT EMPTY
    }
}