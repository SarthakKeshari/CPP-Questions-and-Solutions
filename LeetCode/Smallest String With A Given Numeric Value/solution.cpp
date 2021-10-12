class Solution {
public:
    string getSmallestString(int n, int k) {
        string s(n,'a');   //initiall assign all letters as a
        k=k-n;              //subract count of a 
        for(int i=n-1;i>=0;i--){
            if(k>25){           //check balance k greater than 25 if it is then add 'z' at end
                s[i]='z';
                k=k-25;
            }
            else{            //else we add the character if it is less than equal 25
                s[i]=97+k;
                break;
            }
        }
        return s;
    }
};
