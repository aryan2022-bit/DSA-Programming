// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr, int n) {
        // code here
        vector<int> dp(n, -1);
        return solve(n-1, arr, dp);
    }
    
    
    //Memoization
    private: 
        int solve(int i, vector<int>& nums, vector<int>& dp){
            
            //base case
            if(i<0) return 0;
            
            if(i==0) return nums[0];
            
            if(dp[i] != -1) return dp[i];
            
            //pick
            int pick = nums[i] + solve(i-2, nums, dp);
            
            //not pick
            int notPick = solve(i-1, nums, dp);
            
            return dp[i] = max(pick, notPick);
        }
};
