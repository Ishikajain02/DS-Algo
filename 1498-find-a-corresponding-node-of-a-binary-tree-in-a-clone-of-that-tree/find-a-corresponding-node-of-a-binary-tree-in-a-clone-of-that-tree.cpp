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
public:
    void traver(TreeNode* root,TreeNode*target,TreeNode*&ans){
     if(!root)return;
     if(root->val==target->val){
        ans=root;
        return;
     }
     traver(root->left,target,ans);
     traver(root->right,target,ans);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode*ans=nullptr;
        traver(cloned,target,ans);
        return ans;
    }
};