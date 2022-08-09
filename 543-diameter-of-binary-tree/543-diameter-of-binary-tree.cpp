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
    int height(TreeNode* root, int &maxd){
        if(root == NULL) return 0;
        
        int left=height(root->left,maxd);
        int right=height(root->right,maxd);
        int d=left+right;
        
        maxd=max(d,maxd);
        
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxd=INT_MIN;
        height(root,maxd);
        return maxd;
    }
};