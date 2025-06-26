class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xorOfArr = 0;
       for(int i = 0; i < nums.size(); i++){
        xorOfArr = xorOfArr ^ nums[i];
       } 

       int val = xorOfArr ^ k;

       int flips = 0;
       while(val != 0){
        if(val & 1) flips++;
        val = val >> 1;
       }
       return flips;
    }
};
