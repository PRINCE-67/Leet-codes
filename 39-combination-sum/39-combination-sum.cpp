class Solution {
    private:
    void cs(int i,int target,int sum,vector<int> &v,vector<int>ds,vector<vector<int>> &ans){
        if(i==v.size())
        {
            if(target==sum)
            {
                ans.push_back(ds);
            }
            return ;
        }
        if(target-sum>=v[i]){
            ds.push_back(v[i]);
            sum+=v[i];
            cs(i,target,sum,v,ds,ans);
            sum-=v[i];
            ds.pop_back();
        }
        cs(i+1,target,sum,v,ds,ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        int sum=0;
        cs(0,target,0,candidates,ds,ans);
        return ans;
    }
};