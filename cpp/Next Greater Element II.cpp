class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       vector <int> result;
       int n = nums.size();

       for(int i = 0; i < n; i++){
            int ans = -1;
            for(int j = 1; j < n; j++){
                int idx = (i+j) % n;
                if(nums[idx] > nums[i]){
                    ans = nums[idx];
                    break;
                }
            }
            result.push_back(ans);
       }
       return result; 
    }
};
