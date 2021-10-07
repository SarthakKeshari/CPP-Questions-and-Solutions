/*
Stacks, often known as Last-In-First-Out (LIFO) structures, are well-known.
Push and pop are the two primary operations of a stack, where push puts an element at the top and pop removes an element from the top.

Whenever a stack implementation is considered, the size is now pre-determined or fixed. Even though it is dynamically allocated, its size cannot be altered after it is created.
As a result, a situation known as "stack full" develops.

therefore to overcome this situation a concept was introduced call dynamic stack.

The concept of a "dynamic stack" is to allocate extra memory so that the "stack full" scenario does not occur.
By allocating fresh memory that is bigger than the previous stack memory and transferring components from the old stack to the new stack and Finally, rename the new stack to 
the old stack's name.
*/

#include <iostream>
using namespace std;

/*
At first we create a class named StackUsingArray along with a template so that we dont have to repeat the same code for different data types.
inside the class we declare three variables.
1. *data (for dynamically creating the array which we will use as stack.)
2. nextIndex (stores the current index position of the stack.)
3. capacity (stores the total size of the stack.)
*/

template<typename T>
class StackUsingArray{
    T *data;
    int nextIndex;
    int capacity;
    
public:
  
/*
A no argument constructor is created and the variables are initialized.
NOTE:the pointer variable- data is used to dynamically create the array which is initialised to 4 along with nextIndex=0 and capacity=4.
  
Why we intialized the size of data to 4 and capacity to 4?
reason:dynamic stack uses the concept that when the array gets full then a new array is created of size double then the previous one so intially we assumed that the size 
and capacity to be 4
*/
  
    StackUsingArray(){
    data= new T[4];
    nextIndex=0;
    capacity=4;
    }
  
/*
function size return the current size of the stack.
*/
    
    int size(){
        return nextIndex;
    }
  
/*
  function checkEmty checks whether the stack is empty or not
  
  if nextIndex=0
  then 0==0 
  which will return true
  
  if nextIndex=1
  then 1!=0 
  which will return false
*/
  
    bool checkEmpty(){
        return nextIndex==0;        
    }
  
/*
function push inserts the values in the stack.In this function the main stuff happens-
  
lets assume for now that we have a stack of size 4 and is currently full and data is the pointer for the array.
 
data->array1:  10,20,30,40
       Index:   0, 1, 2, 3
 
so right now the NextIndex value is 4 and capacity is 4 so no more elements can be added.
Now create a new stack of size double than old stack and copy all elements from old stack and then push the new element to the new stack.We create the new stack dynamically 
using pointer variable named Newdata.

array2:  10 , 20 , 30 , 40 , 0 , 0 , 0 , 0   [note:i am assuming 0's to be the garbage values]
Index: 0  , 1  , 2  , 3  , 4 , 5 , 6 , 7
  
after that we deallocate the data and point the data to the  address where the Newdata is pointing
This is how we create a stack with full freedom of size.  
  
*/ 
  
    void push(T element){
        if(nextIndex==capacity){      //this is the condition we know that current stack is full or not 
        T *newdata=new T[capacity*2]; //if full we create another stack dynamically with double the size, copy the elements from Data to Newdata using loop
        for(int i=0;i<capacity;i++){
            newdata[i]=data[i];
        }
        capacity*=2;          // update the capacity value to double of its current value since the new stack is double the size of previous one
        delete []data;        // deallocate the memory of data and point to address where the newdata is pointing
        data=newdata;
        
            
        }
        
       data[nextIndex]=element;//if the stack is not full then we enter the element in the nextIndex position
       nextIndex++;            //update the current index to next
 
    }
    
/*
function pop is used to pop an element
*/
  
    int pop(){
        if(checkEmpty()){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        nextIndex--;
    return data[nextIndex];
    }
    
/*
function top is used to return the element in the top postion of the stack
*/
  
    int top(){
        return data[nextIndex-1];
    }
   
/*
function display is used to display all the elements present in the stack
*/
  
    void display(){
        for(int i=0;i<nextIndex;i++){
            cout<<data[i]<<endl;
        }
    }
};

int main(){
    StackUsingArray<int> s;       
  
/*
this is simple menue driven code
*/ 
  
  int ch;
    while(ch!=7)
    {
        cout<<"\n1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. top\n";
        cout<<"4. size\n";
          cout<<"5. check\n";
            cout<<"6. display\n";
        cout<<"\nEnter your Choice :: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
            int x;
            cout<<"enter the element"<<endl;
            cin>>x;
                s.push(x);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                cout<<s.top()<<endl;
                break;

            case 4:
                
                s.size();
               
                break;
                
                case 5:
                s.checkEmpty();
                break;
                
                case 6:
                s.display();
                break;
                
                case 7:
                ch=7;
                cout<<"\nPress any key .. ";
                break;

            default:
                cout<<"\nWrong Choice!! \n";
                break;
        }
    }

    
    return 0;
}
