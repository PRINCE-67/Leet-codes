class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(10000,-1);
        vector<int>ans(nums1.size(),-1);
        stack <int>st;
        for(int i=0;i<nums2.size();i++)
        {
            while(!st.empty() && nums2[i]>nums2[st.top()])
            {
                v[nums2[st.top()]]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        for(int i=0;i<nums1.size();i++)
        {
            ans[i]=v[nums1[i]];
        }
        return ans;
    }
};