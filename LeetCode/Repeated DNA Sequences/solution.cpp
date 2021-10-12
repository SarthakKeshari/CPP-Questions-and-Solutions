/*
The DNA sequence is composed of a series of nucleotides abbreviated as 'A', 'C', 'G', and 'T'.

For example, "ACGAATTCCG" is a DNA sequence.
When studying DNA, it is useful to identify repeated sequences within the DNA.

Given a string s that represents a DNA sequence, return all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule. You may return the answer in any order.

 

Example 1:

Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
Output: ["AAAAACCCCC","CCCCCAAAAA"]
Example 2:

Input: s = "AAAAAAAAAAAAA"
Output: ["AAAAAAAAAA"]
 

Constraints:

1 <= s.length <= 105
s[i] is either 'A', 'C', 'G', or 'T'.
*/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int>store;
        vector<string>ans;
        int i=0,n=s.length();
        while(i+10<=n){
            string sub=s.substr(i++,10);    //extracting all substring of length from string
            store[sub]++;                    //increment count if same string occurs
            if(store[sub]==2)                //check if it is repeated again if so then add it to vector 
                ans.push_back(sub);
        }
        return ans;                       //return final vector
    }
};
