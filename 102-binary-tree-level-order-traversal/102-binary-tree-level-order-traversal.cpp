/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        
        if(root == NULL) return ans;
        
        q.push(root);        
        while(!q.empty()){
            int sz=q.size();
            
            vector<int>v;
            for(int i=0;i<sz;i++){
                 TreeNode *temp=q.front();
                if(temp->left!= NULL) q.push(temp->left);
                if(temp->right!= NULL) q.push(temp->right);
                v.push_back(temp->val);
                q.pop();
            }
            ans.push_back(v);
        }
        return ans;
    }
};