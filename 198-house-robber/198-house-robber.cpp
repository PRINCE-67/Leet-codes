class Solution {
public:
    
    int rob(vector<int>& nums) {
          int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        
        for(int i=1;i<n;i++){
            int pick=nums[i]+prev2;
            int not_pick=prev;
            
            int curi=max(pick,not_pick);
            
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
};