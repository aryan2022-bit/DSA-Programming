#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        // Edge case: Single element array
        if (n == 1) return 0;

        // Check if the first element is a peak
        if (nums[0] > nums[1]) return 0;

        // Check if the last element is a peak
        if (nums[n-1] > nums[n-2]) return n-1;

        // Check for a peak in the middle of the array
        for (int i = 1; i < n-1; i++) {
            if (nums[i-1] < nums[i] && nums[i] > nums[i+1]) {
                return i;
            }
        }

        return -1; // This should never happen for a valid input
    }
};

// Driver Code
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1}; // Example Input
    int peakIndex = sol.findPeakElement(nums);
    cout << "Peak Element Index: " << peakIndex << endl;
    return 0;
}
