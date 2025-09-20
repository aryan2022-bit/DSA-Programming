class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> freq;
        vector <int> result;

        for(int i : nums1){
            freq[i]++;
        }

        for(int i : nums2){
            if(freq[i] > 0){
                result.push_back(i);
                freq[i]--;
            }
        }
        return result;
    }
};
