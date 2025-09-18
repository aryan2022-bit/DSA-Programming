class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        vector<vector<int>> result;
        vector<int> arr;
        
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                int complement = target - nums[i] - nums[j];
                for(int k = j+1; k < nums.size(); k++){
                    if(k != i && k != j && nums[k] == complement){
                        vector<int> arr = {nums[i], nums[j], nums[k]};
                        sort(arr.begin(), arr.end());
                        result.push_back(arr);
                    }
                }
            }
        }
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(), result.end()), result.end());
        return result;
    }
};
