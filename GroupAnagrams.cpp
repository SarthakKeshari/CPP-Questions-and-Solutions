//Hashtable
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> rlt;
        int i=0;
        for(string s : strs){
            sort(s.begin(), s.end());
            map[s].push_back(strs[i++]);
        }
        
        for(auto p : map){
            sort(p.second.begin(), p.second.end());
            rlt.push_back(p.second);
        }
        
        return rlt;
    }
};
