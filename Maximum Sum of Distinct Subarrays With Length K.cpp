class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> windowSet;
        long long currSum = 0, maxSum = 0;
        int left = 0;

        for(int right = 0; right < nums.size(); right++){

            // If duplicate appears, shrink window from left
            while(windowSet.count(nums[right])){
                windowSet.erase(nums[left]);
                currSum = currSum - nums[left];
                left++;
            }

            // Add current number to set and sum
            windowSet.insert(nums[right]);
            currSum = currSum + nums[right];

            // If window size exceeds k, shrink
            if(right - left + 1 > k){
                windowSet.erase(nums[left]);
                currSum = currSum - nums[left];
                left++;
            }

            // If valid window of size k with all unique elements
            if(right - left + 1 == k){
                maxSum = max(maxSum, currSum);
            }
        }
        return maxSum;
    }
};
