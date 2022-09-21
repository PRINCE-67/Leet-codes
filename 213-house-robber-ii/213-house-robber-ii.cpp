class Solution {
public:
    int rob(vector<int>& nums) {
        
        long long n=nums.size();
        
        if(n==1) return nums[0];
        
        long long prev=nums[1];
        long long prev2=0;
        
        for(long long i=2;i<n;i++){
            long long pick=nums[i]+prev2;
            long long not_pick=prev;
            
            long long curi=max(pick,not_pick);
            
            prev2=prev;
            prev=curi;
        }
        long long ans1= prev;
        
         
         prev=nums[0];
         prev2=0;
        
        for(long long i=1;i<n-1;i++){
            long long pick=nums[i]+prev2;
            long long not_pick=prev;
            
            long long curi=max(pick,not_pick);
            
            prev2=prev;
            prev=curi;
        }
        long long ans2= prev;
        
        return max(ans2,ans1);
    }
};