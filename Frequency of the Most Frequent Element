#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());  // Step 1: Sort the array
        int left = 0;   // Left pointer for sliding window
        long curr = 0;  // Sum of elements in the current window

        for (int right = 0; right < nums.size(); right++) {
            long target = nums[right];  // The number we want to maximize frequency of
            curr += target;  // Add the current element to the sum
            
            // If operations required exceed k, shrink the window
            if ((right - left + 1) * target - curr > k) {
                curr -= nums[left];  // Remove leftmost element
                left++;  // Move left pointer forward
            }
        }
        
        return nums.size() - left;  // The maximum frequency achieved
    }
};

int main() {
    int n, k;
    
    // User input: size of array
    cout << "Enter number of elements in array: ";
    cin >> n;
    
    vector<int> nums(n);
    
    // User input: array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // User input: k (allowed operations)
    cout << "Enter the value of k: ";
    cin >> k;

    // Create Solution object and call function
    Solution sol;
    int result = sol.maxFrequency(nums, k);
    
    // Output the result
    cout << "Maximum frequency after at most " << k << " operations: " << result << endl;

    return 0;
}
