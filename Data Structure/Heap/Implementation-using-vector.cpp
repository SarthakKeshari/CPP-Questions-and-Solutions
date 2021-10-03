#include <bits/stdc++.h>
using namespace std;
#define ll long long 
class Heap{
    vector<int> v;
    string type;
     bool compare(int par,int child)     //Helper function to check wether the heap has right orientation or not
    {
        if(type=="min")
        {
            if(v[par]>v[child])
            {
                return false;
            }
            else 
            {
                return true;
            }
        }
        else
        {
            if(v[par]<v[child])
            {
                return false;
            }
            else 
            {
                return true;
            }

        }
    }
     void heapify(int i)             //Heapify Function
    {
        int left=2*i;
        int right=2*i+1;
        int minidx=i;
        if(left<v.size() and !compare(i,left))
        {
            minidx=left;
        }
        else if(right<v.size() and !compare(i,right))
        {
            minidx=right;
        }
        if(minidx!=i)
        {
            swap(v[minidx],v[i]);
            heapify(minidx);
        }

    }
   
    
    public:
    Heap(int default_size=100,string type="min")      //Constructor Function for the intialization of Heap
    {
        v.reserve(default_size);
        v.push_back(-1);
        this->type=type;
    }
    
    int top()                 //Returns the Topmost element of heap
    {
        return v[1];
    }
    void push(int num)        //Push the elements in heap
    {
        v.push_back(num);
        int idx=v.size()-1;
        int parent=idx/2;
        while(idx>1 and !compare(parent,idx))
        {
            swap(v[parent],v[idx]);
            idx=parent;
            parent=parent/2;

        }


    }
   int pop()            //Pop the element from the heap and returns the popped element
    {
        int idx=v.size()-1;
        swap(v[1],v[idx]);
        int element=v[idx];
        v.pop_back();
        heapify(1);
        return element;

    }
    bool isEmpty()         //Check Wether the heap is Empty or not
    {
        if(v.size()==1) return true;
        return false;
    }

};
int main() {
   int n;   
   cin>>n;   //Taking Input the size of the heap
   string type_of_heap;
   cin>>type_of_heap;    //Taking Input the type of heap wether a Min heap or a Max Heap

   Heap h(n,type_of_heap);
   for(int i=0;i<n;i++)
   {
       int num;
       cin>>num;    // Taking Input the elements of heap
       h.push(num);
   }
   while(!h.isEmpty())     //This loop prints the elements of heap
   {
       cout<<h.top()<<endl;
       cout<<"Popped Element is "<<h.pop()<<endl;

   }

    return 0;
}
