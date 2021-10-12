class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> str;
//first check for divisiblity by 3 and 5 both then 3 and 5 
        for(int i=1;i<=n;i++){
            if(i%3==0 and i%5==0)
                str.push_back("FizzBuzz");
            else if(i%3==0)
                str.push_back("Fizz");
            else if(i%5==0)
                str.push_back("Buzz");
            else
                str.push_back(to_string(i));
        }
        return str; 
    }
};