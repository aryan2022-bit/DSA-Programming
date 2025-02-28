#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, count = 0;

        for(int i : nums){
            if(i == 1) count++;
            else count = 0;

            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};

int main() {
    Solution sol;

    // Taking input from user
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the binary array elements (0s & 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Calling function and displaying output
    int result = sol.findMaxConsecutiveOnes(nums);
    cout << "Maximum Consecutive 1s: " << result << endl;

    return 0;
}
