#include<iostream>
using namespace std;

class Solution{
    public:
    // Member function will return the anwser of int datatype
        int reverse(int x){
            int rev=0;
            while(x!=0){
                int digit=x%10;
                x/=10;

                if (rev > 2147483647/10){
                    return 0;
                }
                if (rev < -2147483647/10){
                    return 0;
                }rev=rev*10+digit;
                // Returning the finial answer
            }return rev;
        }
};
// { Driver Code Starts.
int main(){
    Solution s;
    //calling method reverseI() with number.
    s.reverse(4);

    return 0;
}