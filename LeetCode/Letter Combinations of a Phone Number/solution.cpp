/*
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]
 

Constraints:

0 <= digits.length <= 4
digits[i] is a digit in the range ['2', '9'].
*/

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>phone={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; //create vector of string for each number in phone
        if(digits.empty())
            return {};         //if input is empty return empty vector
        vector<string>result;  //store final result
        result.push_back("");
        for(auto d:digits){        //for every digit
            vector<string>temp;     //create temp vecotr to store string cur string and update in result vector
            for(auto s:phone[d-'0']){
                for(auto r:result){
                    temp.push_back(r+s);       //compute every combination of strings
                }
            }
            result.swap(temp);
        }
        return result;
    }
};
