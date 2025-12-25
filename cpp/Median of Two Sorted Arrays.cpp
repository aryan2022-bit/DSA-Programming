#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end()); // Merge arrays
        sort(nums1.begin(), nums1.end()); // Sort the merged array

        int n = nums1.size();

        if (n % 2 == 0) {
            return (nums1[n/2] + nums1[n/2 - 1]) / 2.0; // Ensure floating-point division
        } else {
            return nums1[n/2]; // No division needed for odd-sized arrays
        }
    }
};

int main() {
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    Solution sol;
    cout << "Median: " << sol.findMedianSortedArrays(nums1, nums2) << endl;

    return 0;
}
