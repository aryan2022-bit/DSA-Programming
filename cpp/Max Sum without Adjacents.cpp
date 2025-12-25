// User function template for C++
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& arr, int n) {
        // code here
        vector<int> dp(n, -1);
        return solve(n, arr, dp);
    }
    
    
    //Memoization
    // private: 
    //     int solve(int i, vector<int>& nums, vector<int>& dp){
            
    //         //base case
    //         if(i<0) return 0;
            
    //         if(i==0) return nums[0];
            
    //         if(dp[i] != -1) return dp[i];
            
    //         //pick
    //         int pick = nums[i] + solve(i-2, nums, dp);
            
    //         //not pick
    //         int notPick = solve(i-1, nums, dp);
            
    //         return dp[i] = max(pick, notPick);
    //     }
        
    //Tabulation
    private: 
        int solve(int n, vector<int>& nums, vector<int>& dp){
            
            //base case
            if(n==0) return 0;
            
            if(n==1) return nums[0];
            
            dp[0] = nums[0];
            
            dp[1] = max(nums[0], nums[1]);
            
            for(int i = 2; i<dp.size(); i++){
                int pick = nums[i] + dp[i-2];
                int notPick = dp[i-1];
                dp[i] = max(pick, notPick);
            }
            return dp[n-1];
        }
};
