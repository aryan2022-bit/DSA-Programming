#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0; // Pointer for the next non-zero position

        // Move all non-zero elements forward
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[left], nums[right]);
                left++;
            }
        }
    }
};

// Driver Code
int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    Solution obj;
    obj.moveZeroes(nums);

    cout << "Array after moving zeros: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
