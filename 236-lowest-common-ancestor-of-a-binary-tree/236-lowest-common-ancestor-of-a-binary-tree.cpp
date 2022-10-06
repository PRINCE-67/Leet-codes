/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    private:
    bool lca(TreeNode* root, TreeNode* p, TreeNode* q,TreeNode* temp){
        
        if(root == NULL) return false;
        
        bool l=lca(root->left,p,q,temp);
        bool r=lca(root->right,p,q,temp);
        
        
        if(l== true && r == true){
            temp=root;
            return true;
        }
        if(l==true || r==true){
            if(root == p || root == q){
                temp=root;
            }
            return true;
        }
        if( l == false && r== false){
            if(root == p || root==q) return true;
        }
        return false;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        
        
        TreeNode* l=lowestCommonAncestor(root->left,p,q);
        TreeNode* r=lowestCommonAncestor(root->right,p,q);
        
        if(root == p || root == q) return root;
        
        if(l!=NULL && r!=NULL) return root;
        
        if(l==NULL || r!=NULL){
            if(root == p || root == q){
                return root;
            }
            return r;
        }
        if(l!=NULL || r==NULL){
            if(root == p || root == q){
                return root;
            }
            return l;
        }
        
        return root;
    }
};