#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // ✅ Step 1: Initialize maxSum with the first element
        // This ensures we handle cases where all elements are negative.
        int sum = 0, maxSum = nums[0];  

        // ✅ Step 2: Traverse the array to find the maximum subarray sum
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];  // Add current element to the running sum

            maxSum = max(maxSum, sum);  // Update maxSum if sum is greater

            // ✅ Step 3: Reset sum to 0 if it goes negative
            // A negative sum means we should start fresh from the next element.
            if(sum < 0) sum = 0;  
        }
        return maxSum;  // ✅ Step 4: Return the maximum subarray sum found
    }
};

// ✅ Driver Code (for testing)
int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  // Example Test Case
    cout << "Maximum Subarray Sum: " << sol.maxSubArray(nums) << endl;
    return 0;
}
