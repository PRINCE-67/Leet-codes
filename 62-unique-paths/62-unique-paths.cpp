class Solution {
public:
    int upd(int m,int n,vector<vector<int>>& dp){
        
        if(m==1 || n==1){
            dp[m][n]=1;
            return dp[m][n];
        }
        
        if(dp[m][n]!=-1) return dp[m][n];
        
        int down = upd(m-1,n,dp);
        int right = upd(m,n-1,dp);
        dp[m][n]=down+right;
        
        return dp[m][n];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector(n+1,-1));
        return upd(m,n,dp);
    }
};