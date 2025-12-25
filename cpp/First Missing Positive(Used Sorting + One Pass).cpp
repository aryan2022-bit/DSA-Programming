#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Step 1: Sort the array
        int smallest = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < smallest) continue;  // Ignore negative and smaller values
            if (nums[i] == smallest) smallest++;  // Increase smallest if found
            else if (nums[i] > smallest) break;  // If a gap is found, stop early
        }

        return smallest;
    }
};
