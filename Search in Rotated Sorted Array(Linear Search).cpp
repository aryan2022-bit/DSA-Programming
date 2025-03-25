#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;  // Initialize index
        
        while (i < nums.size()) {  // Iterate through the array
            if (nums[i] == target) {
                return i;  // Return index if target is found
            }
            i++;  // Move to the next element
        }
        
        return -1;  // Return -1 if target is not found
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 7, 9, 11};  // Example array
    int target = 7;

    int result = sol.search(nums, target);
    
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
