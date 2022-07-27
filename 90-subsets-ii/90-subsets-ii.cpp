class Solution {
public:
    void subs(int idx,vector<int>&ds,vector<int>&v,vector<vector<int>>&ans){
        ans.push_back(ds);
        for(int i=idx;i<v.size();i++){
            if(i!=idx && v[i]==v[i-1]) continue;
            ds.push_back(v[i]);
            subs(i+1,ds,v,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        subs(0,ds,nums,ans);
        return ans;
    }
};