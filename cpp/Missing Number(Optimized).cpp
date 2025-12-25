#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n * (n + 1)) / 2;  // Sum of first N natural numbers

        for(int i = 0; i < n; i++) {
            sum = sum - nums[i];  // Subtract each element from the sum
        }

        return sum;  // Remaining value is the missing number
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
    int missing = obj.missingNumber(nums);
    cout << "Missing Number: " << missing << endl;

    return 0;
}
