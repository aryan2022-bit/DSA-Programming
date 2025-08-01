class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return 0;

        if(n == 2 && nums[1] > nums[0]) return 1;

        if(nums[n-1] > nums[n-2]) return n-1;

        for(int i=1; i < n-1; i++){
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
                return i;
            }
        }
        return 0;
    }
};
