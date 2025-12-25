class Solution {
public:
    int climbStairs(int n) {
        vector <int> dp(n+1, -1);

        return climbStairs(n, dp);
    }

/*
    //Memoization (Method : 1)
    public:
        int climbStairs(int n, vector<int>& dp){

            if(n == 1 || n == 2) return n;

            if(dp[n] != -1) return dp[n];

            return dp[n] = climbStairs(n-1) + climbStairs(n-2);
        } */

    //Tabulation (Method : 2)
    public:
        int climbStairs(int n, vector<int>& dp){

            if(n == 1 || n == 2) return n;

            dp[1] = 1;
            dp[2] = 2;

            for(int i=3; i < dp.size(); i++){
                dp[i] = dp[i-1] + dp[i-2];
            }
            return dp[n];
        }
};
