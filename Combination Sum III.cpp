class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> path;
        vector<vector<int>> result;
        dfs(1, k, n, path, result);
        return result;
    }
    void dfs(int i, int k, int n, vector<int>& path, vector<vector<int>>& result){
        // Base cases
        if(k == 0 && n == 0){
            result.push_back(path);
            return;
        }

        if(i > 9 || n < 0) return;

        // Include
        path.push_back(i);
        dfs(i+1, k-1, n-i, path, result);

        // Backtrack
        path.pop_back();

        // Exclude
        dfs(i+1, k, n, path, result);
    }
};
