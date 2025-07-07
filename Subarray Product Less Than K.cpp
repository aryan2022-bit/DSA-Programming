class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;

        int left = 0;
        long long product = 1;
        int count = 0;

        for(int right = 0; right < nums.size(); right++){
            product = product * nums[right];

            while(product >= k && left <= right){
                product = product / nums[left];
                left++;
            }

            count =  count + (right - left + 1);
        }
        return count;
    }
};
