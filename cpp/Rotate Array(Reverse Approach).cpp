#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // Handle cases where k > n
        
        // Step 1: Reverse the entire array
        reverse(nums.begin(), nums.end());

        // Step 2: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: Reverse the remaining n-k elements
        reverse(nums.begin() + k, nums.end());
    }
};

int main() {
    Solution sol;
    
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    int k1 = 3;
    sol.rotate(nums1, k1);
    cout << "Rotated Array: ";
    for (int num : nums1) cout << num << " ";
    cout << endl;

    vector<int> nums2 = {-1, -100, 3, 99};
    int k2 = 2;
    sol.rotate(nums2, k2);
    cout << "Rotated Array: ";
    for (int num : nums2) cout << num << " ";
    cout << endl;

    return 0;
}
