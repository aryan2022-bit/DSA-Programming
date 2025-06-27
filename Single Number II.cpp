class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < 32; i++){
            int count_ones = 0;
            int count_zeros = 0;

            for(int val : nums){
                if((val & (1 << i)) != 0){
                    count_ones++;
                }else{
                    count_zeros++;
                }
            }

            if(count_ones % 3 != 0){
                result = result | (1 << i);
            }
        }
        return result;
    }
};
