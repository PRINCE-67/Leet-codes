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
    int ht(TreeNode* root){
        if(root == NULL) return 0;
        
        int left=ht(root->left);
        int right=ht(root->right);
        
       if(left==-1 || right == -1)
           return -1;
        else if(abs(left-right)>1) return -1;
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        
        int lt=ht(root->left);
        int rt=ht(root->right);
        
        
        if(lt == -1 || rt == -1) return false;
        else if(abs(lt-rt)>1) return false;
        return true;
        
    }
};