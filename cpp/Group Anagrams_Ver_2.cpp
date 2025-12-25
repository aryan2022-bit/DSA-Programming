class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map <string, vector<string>> mp;

       for(auto& s : strs){
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());
            mp[sortedStr].push_back(s);
       }

       vector<vector<string>> result;

       for(pair<const string, vector<string>>& p : mp){
            result.push_back(p.second);
       }
       return result; 
    }
};
