#include <bits/stdc++.h>  // Includes all standard libraries (for competitive programming)
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);  // Result array with exact size

        int posIdx = 0, negIdx = 1; // Pointers for placing positive & negative numbers

        // Traverse the nums array and place elements at correct positions
        for (int num : nums) {
            if (num > 0) {
                arr[posIdx] = num;  // Place positive number at even index
                posIdx += 2; 
            } else {
                arr[negIdx] = num;  // Place negative number at odd index
                negIdx += 2;
            }
        }

        return arr;
    }
};

// Driver Code (For Testing)
int main() {
    Solution solution;

    vector<int> nums1 = {3, 1, -2, -5, 2, -4};
    vector<int> result1 = solution.rearrangeArray(nums1);
    cout << "Output 1: ";
    for (int num : result1) cout << num << " ";
    cout << endl;

    vector<int> nums2 = {-1, 1};
    vector<int> result2 = solution.rearrangeArray(nums2);
    cout << "Output 2: ";
    for (int num : result2) cout << num << " ";
    cout << endl;

    return 0;
}
