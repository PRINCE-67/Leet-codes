class Solution {
    private:
     void subs(int i, vector<int>&v, vector<int> &ds, vector<vector<int>> &ans)
{
	if (i == v.size())
	{        
        ans.push_back(ds);
		return;
	}

	ds.push_back(v[i]);
	subs(i + 1, v, ds,ans);
	ds.pop_back();
	subs(i + 1, v, ds,ans);
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        subs(0,nums,ds,ans);
        return ans;
    }
};