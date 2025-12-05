class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        unordered_map<int, int> count;
        for(int i : nums){
            count[i]++;
        }
        dfs(nums, path, count, res);
        return res;
    }
    void dfs(vector<int>& nums, vector<int>& path, unordered_map<int, int>& count, vector<vector<int>>& res){
        //Base Case
        if(path.size() == nums.size()){
            res.push_back(path);
            return;
        }

        for(auto &p : count){
            if(p.second > 0){
                path.push_back(p.first);
                p.second--;

                dfs(nums, path, count, res);
                p.second++;
                path.pop_back();
            }
        }
    }
};
