#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (mid % 2 == 1) mid--; // Ensure mid is even for checking pairs
            
            if (nums[mid] == nums[mid + 1]) {
                left = mid + 2; // Move to the right half
            } else {
                right = mid; // Move to the left half (includes potential answer)
            }
        }
        return nums[left]; // `left` will point to the single element
    }
};
