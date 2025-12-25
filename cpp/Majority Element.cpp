#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;

        // Step 1: Find candidate using Moore's Voting Algorithm
        for(int num : nums) {
            if(count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        // Step 2: Verify if candidate is actually a majority element
        count = 0;
        for(int num : nums) {
            if(num == candidate) {
                count++;
            }
        }

        if(count > nums.size() / 2) {
            return candidate;  // ✅ Candidate is the majority element
        }

        return -1;  // ❌ No majority element (not needed as per problem constraints)
    }
};

// ✅ Driver Code
int main() {
    Solution sol;
    vector<int> nums = {3, 3, 4}; // Example Test Case
    cout << "Majority Element: " << sol.majorityElement(nums) << endl;
    return 0;
}
