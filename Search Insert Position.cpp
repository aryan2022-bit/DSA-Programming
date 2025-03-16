#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;  
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    int target;
    cout << "Enter target value: ";
    cin >> target;

    int result = sol.searchInsert(nums, target);
    cout << "Insert position: " << result << endl;

    return 0;
}
