class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result;

        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums2[j] == nums1[i]) result.insert(nums1[i]);
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};
