class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        if(n == 0) return 0;
        int cnt=1,mxcnt=1;
        for(auto x:s){
            if(s.count(x+1) == 1) cnt++;
            else{
                mxcnt=max(mxcnt,cnt);
                cnt=1;
            }
        }
        return mxcnt;
    }
};