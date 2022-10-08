class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int j = INT_MAX;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                j=min(j,i);
            }
            else{
                if(j!= INT_MAX)
                {nums[j]=nums[i];
                j++;}
                cnt++;
            }
        }
        return cnt;
    }
};