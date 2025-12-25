class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int currSum = 0;
        return countWays(0, currSum, target, nums);
    }

    private:
     int countWays(int i, int currSum, int target, vector<int>& arr){

        if(i == arr.size()){
            return (currSum == target) ? 1 : 0;
        }

        int plus = countWays(i+1, currSum + arr[i], target, arr);
        int minus = countWays(i+1, currSum - arr[i], target, arr);

        return plus + minus;
    }
};
