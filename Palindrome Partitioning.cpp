class Solution {
public:
    vector<vector<string>> res;
    vector<string> path;
    vector<vector<string>> partition(string s) {
        dfs(0, s);
        return res;
    }
    void dfs(int index, string &s){
        // Base Case
        if(index == s.length()){
            res.push_back(path);
            return;
        }

        for(int i = index; i < s.length(); i++){
            if(isPalindrome(s, index, i)){
                path.push_back(s.substr(index, i - index + 1));

                dfs(i+1, s);

                path.pop_back();
            }
        }
    }
    bool isPalindrome(string &s, int l, int r){
        while(l < r){
            if(s[l] != s[r]) return false;
            l++, r--;
        }
        return true;
    }
};
