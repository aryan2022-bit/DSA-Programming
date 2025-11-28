class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> path;
        vector<vector<int>> result;
        dfs(0, candidates, target, path, result);
        return result;
    }
    void dfs(int i, vector<int>& candidates, int target, vector<int>& path, vector<vector<int>>& result){
        //Base cases
        if(target == 0){
            result.push_back(path);
            return;
        }
        
        if(i >= candidates.size() || target < 0) return;

        //Include
        path.push_back(candidates[i]);
        dfs(i+1, candidates, target - candidates[i], path, result);

        //Backtrack
        path.pop_back();

        //Skip duplicates per level (for exclude branch)
        int j = i;
        while(j+1 < candidates.size() && candidates[j] == candidates[j+1]) j++;

        //Exclude
        dfs(j+1, candidates, target, path, result);
    }
};
