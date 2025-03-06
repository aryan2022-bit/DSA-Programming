#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftarr, rightarr, arr;  // Separate lists for positives, negatives, and final result

        // Step 1: Separate positive and negative numbers
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) { 
                leftarr.push_back(nums[i]);
            } else {
                rightarr.push_back(nums[i]);
            }
        }

        // Step 2: Merge them in alternate positions
        int i = 0, j = 0;
        while (i < leftarr.size() && j < rightarr.size()) {
            arr.push_back(leftarr[i++]);  // Push positive number
            arr.push_back(rightarr[j++]); // Push negative number
        }

        return arr;
    }
};

// Driver Code (For Testing)
int main() {
    Solution solution;
    
    // Example Test Case 1
    vector<int> nums1 = {3, 1, -2, -5, 2, -4};
    vector<int> result1 = solution.rearrangeArray(nums1);
    cout << "Output 1: ";
    for (int num : result1) cout << num << " ";
    cout << endl;

    // Example Test Case 2
    vector<int> nums2 = {-1, 1};
    vector<int> result2 = solution.rearrangeArray(nums2);
    cout << "Output 2: ";
    for (int num : result2) cout << num << " ";
    cout << endl;

    return 0;
}
