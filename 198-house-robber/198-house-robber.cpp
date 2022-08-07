class Solution {
public:
    
    int ways(vector<int>& a,int n,vector<int>& dp){
        if(n==0) return a[0];
        
        if(dp[n]!=-1) return dp[n];
        
        int np=ways(a,n-1,dp);
        int p=INT_MIN;
        p=a[n];
        if(n>1){
            p+=ways(a,n-2,dp);
        }
        
        return dp[n]=max(p,np);
    }
    
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return ways(nums,nums.size()-1,dp);
    }
};