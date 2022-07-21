class Solution {
public:
    int s(int m){
        int sum=0;
        while(m!=0){
            sum+=m%10;
            m=m/10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
     map<int,vector<int>>mp;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int sum=s(nums[i]);
            mp[sum].push_back(nums[i]);
        }
        int mxsum=INT_MIN;
        for(auto it= mp.begin();it!=mp.end();it++){
            int sum=0;
            
            if(it->second.end()-1 != it->second.begin())
            sum=*(it->second.end()-1)+*(it->second.end()-2);
            else sum=-1;
            
            mxsum=max(sum,mxsum);
        }
        return mxsum;
    }
};