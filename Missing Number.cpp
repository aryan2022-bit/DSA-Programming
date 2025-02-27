#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());  // Step 1: Sort the array

        // Step 2: Check if 0 is missing
        if (nums[0] != 0) return 0;

        // Step 3: Check if n is missing
        if (nums[n - 1] != n) return n;

        // Step 4: Find missing number in between
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1] + 1) {
                return nums[i - 1] + 1;
            }
        }

        return -1; // Should never reach here
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int missingNum = obj.missingNumber(nums);
    cout << "Missing Number: " << missingNum << endl;

    return 0;
}
