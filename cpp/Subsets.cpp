class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        subsets2(0, nums, temp, res);
        return res;
    }
    private:
        void subsets2(int i, vector<int> &nums,vector<int> temp, vector<vector<int>> &res){
            //base case
            if(i == nums.size()){
                res.push_back(temp);
                return;
            }

            //pick
            temp.push_back(nums[i]);
            subsets2(i+1, nums, temp, res);

            //backtrack
            temp.pop_back();

            //not pick
            subsets2(i+1, nums, temp, res);
        }
};
