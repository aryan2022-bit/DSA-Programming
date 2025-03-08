#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int count = 1, maxCount = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) continue; 

            if (nums[i] == nums[i - 1] + 1) { 
                count++; 
                maxCount = max(maxCount, count);
            } else {
                count = 1; 
            }
        }

        return maxCount;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};

    cout << "Longest Consecutive Sequence Length: " << obj.longestConsecutive(nums) << endl;

    return 0;
}
