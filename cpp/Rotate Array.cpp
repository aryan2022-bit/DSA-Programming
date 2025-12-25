#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // Handle cases where k > n
        
        // Step 1: Reverse entire array
        reverse(nums.begin(), nums.end());
        
        // Step 2: Reverse first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Step 3: Reverse remaining n-k elements
        reverse(nums.begin() + k, nums.end());
    }
};

// Driver function to test the solution
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    sol.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
