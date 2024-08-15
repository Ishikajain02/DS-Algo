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
   int h(TreeNode *root){
    if(!root)return 0;
    return max(h(root->left),h(root->right))+1;
   }
   TreeNode *ans(TreeNode*root){
    if(!root)return nullptr;
    int left=h(root->left);
    int right=h(root->right);
    if(left==right)return root;
    else if(left>right)return ans(root->left);
    return ans(root->right);
   }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        return ans(root);
    }
};