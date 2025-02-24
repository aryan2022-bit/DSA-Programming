#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle empty array case

        int count = 1; // Start counting unique elements from index 1

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {  // If the element is different from previous
                nums[count] = nums[i];  // Place it at the correct position
                count++;
            }
        }
        return count; // Return the number of unique elements
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted elements (with duplicates allowed): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int uniqueCount = sol.removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Number of unique elements: " << uniqueCount << endl;

    return 0;
}
