class Solution {
public:
    int dpp(int m,int n,vector<vector<int>>& dp){
        
        if(m==1 || n==1){
            dp[m][n]=1;
            return dp[m][n];
        }
        
        if(dp[m][n]!=-1) return dp[m][n];
        
        int down = dpp(m-1,n,dp);
        int right = dpp(m,n-1,dp);
        dp[m][n]=down+right;
        
        return dp[m][n];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector(n+1,-1));
        return dpp(m,n,dp);
    }
};