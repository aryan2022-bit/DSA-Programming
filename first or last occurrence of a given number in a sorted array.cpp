#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        return {first, last};
    }

private:
    // Function to find the first occurrence of target
    int findFirst(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int first = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) {
                high = mid - 1;  // Move left
            } else {
                low = mid + 1;
            }
            if (nums[mid] == target) first = mid;
        }
        return first;
    }

    // Function to find the last occurrence of target
    int findLast(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int last = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] <= target) {
                low = mid + 1;  // Move right
            } else {
                high = mid - 1;
            }
            if (nums[mid] == target) last = mid;
        }
        return last;
    }
};

// Main function to test the solution
int main() {
    Solution solution;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    
    vector<int> result = solution.searchRange(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl; // Output: [3, 4]
    
    return 0;
}
