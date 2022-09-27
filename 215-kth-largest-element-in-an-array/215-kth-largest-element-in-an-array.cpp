class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        
        for(int i=0;i<n;i++){
            if(i == (k-1)) return pq.top();
            pq.pop();
        }
        return pq.top();
    }
};