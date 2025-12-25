class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string path = "";
        vector<string> result;
        unordered_map<char, string> mp{
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };
        dfs(0, digits, path, result, mp);
        return result;
    }
    void dfs(int i, string& digits, string& path, vector<string>& result, unordered_map<char, string>& mp){
        // Base Case
        if(i == digits.size()){
            result.push_back(path);
            return;
        }

        for(char c : mp[digits[i]]){
            path.push_back(c);
            dfs(i+1, digits, path, result, mp);
            path.pop_back();
        }
    }
};
