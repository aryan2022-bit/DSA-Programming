class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;

        comSum(0, target, temp, res, candidates);
        return res;
    }

    private:
        void comSum(int i, int target, vector<int>& temp, vector<vector<int>>& res, vector<int>& candidates){
            //+ve base case
            if(target == 0){
                res.push_back(temp);
                return;
            }

            //-ve base case
            if(target < 0 || i == candidates.size()) return;

            //pick
            temp.push_back(candidates[i]);
            comSum(i, target - candidates[i], temp, res, candidates);

            //backtrack
            temp.pop_back();

            //not pick
            comSum(i+1, target, temp, res, candidates);
        }
};
