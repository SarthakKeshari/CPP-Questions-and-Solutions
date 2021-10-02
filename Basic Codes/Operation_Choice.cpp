//Write a menu driven program to get the kind of operation user wants to perform on the two numeric values and return the answer accordingly

#include <iostream>

using namespace std;

int main()
{
//Showing the menu for the user 
    cout<<"Options are:-"<<endl;

    cout<<"(1) add"<<endl;
    
    cout<<"(2) subtract"<<endl;
    
    cout<<"(3) multiply"<<endl;
    
    cout<<"(4) divide"<<endl;
//Taking user input
    int a,b;

    cout<<"\n enter two values\n";
    
    cin>>a>>b;
    
    int ch;
    
    cout<<"\nEnter you choice\n";
    cin>>ch;
//Performing operations and printing the output based on user choice.
    if(ch == 1){
            cout<<"Additon of two no's is:- "<<(a+b);
        
        

    }
    

    else if(ch == 2){

        cout<<"subtraction of two no's is:- "<<(a-b);

    }

    
    else if(ch == 3){

        cout<<"multiplication of two no's is:- "<<(a*b);

            }



    else if(ch == 4){
        if (b == 0){
            cout<<"Division by 0 not allowed";
        }
        else{
        
        cout<<"multiplication of two no's is:- "<<(a*b);
        }
    }
     else{

         cout<<"Invalid Choice";
     }

    return 0;
}
