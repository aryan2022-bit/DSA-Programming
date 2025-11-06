class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        int left = 0;
        int right = k - 1;

        while(right < nums.size()){
            int biggest = nums[left];
            for(int i = left; i <= right; i++){
                if(nums[i] > biggest) biggest = nums[i];
            }
            result.push_back(biggest);
            left++;
            right++;
        }
        return result;
    }
};
