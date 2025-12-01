class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int i : nums){
            mp[i]++;
        }

        for(auto &p : mp){
            if(p.second > 1) return p.first;
        }

        return -1;
    }
};
