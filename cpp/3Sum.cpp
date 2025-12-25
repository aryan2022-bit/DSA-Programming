class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int left = i + 1, right = nums.size() - 1;

            while(left < right){
                int twoSum = nums[left] + nums[right];

                if(twoSum < -nums[i]) left++;
                else if(twoSum > -nums[i]) right--;
                else{
                    vector<int> arr = {nums[i], nums[left], nums[right]};
                    result.push_back(arr);

                    while(left < right && nums[left] == nums[left+1]) left++;
                    while(left < right && nums[right] == nums[right-1]) right--;

                    left++, right--;
                }
            }
        }
        return result;
    }
};
