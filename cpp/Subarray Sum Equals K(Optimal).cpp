#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int preSum = 0, cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            preSum = preSum + nums[i];
            int remove = preSum - k;
            cnt = cnt + mpp[remove];
            mpp[preSum] = mpp[preSum] + 1;
        }

        return cnt;
    }
};

int main() {
    vector<int> nums = {3, 4, 7, -3, 1, 2, 3};
    int k = 7;

    Solution sol;
    int result = sol.subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << " is: " << result << endl;

    return 0;
}
