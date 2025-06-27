class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int val = 0;
        for(int num : nums){
            val = val ^ num;
        }

        int bit = val & -val;

        int a = 0, b = 0;

        for(int num : nums){
            if(num & bit){
                a = a ^ num;
            }else{
                b = b ^ num;
            }
        }

        return {a, b};
    }
};
