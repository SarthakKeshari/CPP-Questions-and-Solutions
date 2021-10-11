#include<iostream>

int main(){
    //declaring a variable and reading input from user
    std::cout<<"Enter a number\n";
    int n;std::cin>>n;
    //since n is used for the outerloop we create a copy called
    //temp which is used for printing spaces 
    int temp =n;
    std::cout<<"ButterFly Pattern\n";
//main loop which increments the values of the number
    for(int i=1;i<=n;i++){
        //responsible for printing the numbers on left side
        for(int j=1;j<=i;j++){
            std::cout<<(j);
        }
        //prints the space between numbers in each row
        for(int k=1;k<2*temp-1;k++){
            std::cout<<(" ");
        }
        //prints the numbers on right side
        for(int l=i;l>=1;l--){
            std::cout<<(l);
        }
        /*temp is decremented hence with each increment in n
         the space between the left and right numbers is reduced
        */
        temp--;
        //new line moves the cursor to another line 
        std::cout<<"\n";
    }

//in the above loop temp started at n value here we do the reverse print
    temp=1;
    //the initial values are opposite of the above loop resulting in reverse pattern
    for(int i=n-1;i>=1;i--){
        //prints left side numbers
        for(int j=1;j<=i;j++){
            std::cout<<(j);
        }
        //prints spaces
        for(int k=2*temp-1;k>=0;k--){
            std::cout<<(" ");
        }
        //prints right side numbers
        for(int l=i;l>=1;l--){
            std::cout<<(l);
        }
        temp++;
        std::cout<<"\n";
    }
    return 0;
}
