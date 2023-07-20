class Solution {
public:
    int tfibo(int n,vector<int>& dp){
        if(dp[n]!=-1)
            return dp[n];
        return dp[n] = tfibo(n-1,dp) + tfibo(n-3,dp) + tfibo(n-2,dp);
    }
    int tribonacci(int n) {
        vector<int> dp(n+3,-1);
        dp[0] = 0;
        dp[1] = dp[2] = 1;
        return tfibo(n,dp);
    }
};