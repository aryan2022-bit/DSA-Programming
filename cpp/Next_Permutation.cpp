#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        // Step 1: Find the first decreasing element from the right
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // Step 2: If no such index is found, reverse the array (last permutation case)
        if(index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find the smallest element greater than nums[index] from the right
        for(int i = n - 1; i > index; i--) {
            if(nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Step 4: Reverse the right half after index to get the next permutation
        reverse(nums.begin() + index + 1, nums.end());
    }
};

// Driver Code
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};  // Example input
    sol.nextPermutation(nums);

    cout << "Next Permutation: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
