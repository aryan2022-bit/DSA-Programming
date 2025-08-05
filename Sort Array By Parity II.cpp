class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int evenIndex = 0;
        int oddIndex = 1;
        int n = nums.size();

        while(evenIndex < n && oddIndex < n){
            if(nums[evenIndex] % 2 == 0){
                evenIndex = evenIndex + 2;
            }else if(nums[oddIndex] % 2 != 0){
                oddIndex = oddIndex + 2;
            }else{
                swap(nums[evenIndex], nums[oddIndex]);
                evenIndex += 2;
                oddIndex += 2;
            }
        }
        return nums;
    }
};
