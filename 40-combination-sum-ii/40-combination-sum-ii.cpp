class Solution {
public:
     void subs(int idx,int sum,int target,vector<int>&ds,vector<int>&v,vector<vector<int>>&ans){
        
         if(sum == target)
         ans.push_back(ds);
         
        for(int i=idx;i<v.size();i++){
            if(i!=idx && v[i]==v[i-1] || target-sum+v[i]<v[i]) continue;
            
                sum+=v[i];
                ds.push_back(v[i]);
            subs(i+1,sum,target,ds,v,ans);
            ds.pop_back();
            sum-=v[i];
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        subs(0,0,target,ds,candidates,ans);
        return ans;
    }
};