class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int val = 0;
        for(int num : nums){
            val = val ^ num;
        }

        int index = 0;
        while(((val >> index) & 1) == 0){
            index++;
        }

        int bit = 1 << index;

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
