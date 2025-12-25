class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(), false);
        vector<int> path;
        vector<vector<int>> result;
        permute2(nums, used, path, result);
        return result;
    }
    void permute2(vector<int>& nums, vector<bool>& used, vector<int>& path, vector<vector<int>>& result) {
        if(path.size() == nums.size()){
            result.push_back(path);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(!used[i]){
                used[i] = true;
                path.push_back(nums[i]);

                permute2(nums, used, path, result);

                used[i] = false;
                path.pop_back();
            }
        }
    }
};
