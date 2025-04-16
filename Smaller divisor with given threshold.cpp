#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        long low = 1;  // as divisor can be as low as 1
        long high = *max_element(nums.begin(), nums.end());
        long ans = high;

        while (low <= high) {
            long mid = low + (high - low) / 2;
            long myThreshold = 0;

            for (int num : nums) {
                myThreshold = myThreshold + (num + mid - 1) / mid;
            }

            if (myThreshold <= threshold) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> nums = {21212, 10101, 12121};
    int threshold = 1000000;

    int result = sol.smallestDivisor(nums, threshold);
    cout << "Smallest Divisor: " << result << endl;

    return 0;
}
