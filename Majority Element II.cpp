class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> ans;    // key = number, value = frequency
        vector<int> result;

        // Step 1: Count frequencies
        for (int i = 0; i < n; i++) {
            ans[nums[i]]++;
        }

        // Step 2: Collect numbers that appear more than n/3 times
        for (auto& pair : ans) {
            int num = pair.first;
            int count = pair.second;

            if (count > n / 3) {
                result.push_back(num);
            }
        }

        return result;
    }
};
