class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> mp;

        for(int i : nums){
            mp[i]++;
        }
        
        for(int i = 1; i <= nums.size(); i++){
            if(mp[i] == 0){
                res.push_back(i);
            }
        }
        return res;
    }
};
