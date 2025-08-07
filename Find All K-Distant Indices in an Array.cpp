class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> result;

        for(int right = 0; right < nums.size(); right++){
            if(nums[right] == key){
                for(int left = 0; left < nums.size(); left++){
                    if(abs(left - right) <= k){
                        if(find(result.begin(), result.end(), left) == result.end()){
                            result.push_back(left);
                        }
                    }
                }
            }
        }
        return result;
    }
};
