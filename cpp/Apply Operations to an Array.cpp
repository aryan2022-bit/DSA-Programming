#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        
        // Step 1: Apply the doubling operation
        for(int i = 0; i < n - 1; i++){
            if(nums[i] == nums[i + 1]){
                nums[i] = nums[i] * 2; // Double the value
                nums[i + 1] = 0;       // Set the next element to zero
            }
        }

        // Step 2: Move all non-zero elements to the left
        int left = 0; // Points to the next position for a non-zero number
        for(int right = 0; right < n; right++){
            if(nums[right] != 0){
                swap(nums[left], nums[right]); // Swap non-zero elements forward
                left++;
            }
        }

        return nums;
    }
};

// Driver Code
int main() {
    Solution sol;
    vector<int> nums = {2, 2, 0, 4, 4, 8};
    
    vector<int> result = sol.applyOperations(nums);

    // Output the result
    cout << "Resultant array: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
