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
int tr(TreeNode*root,int &ans){
    if(!root)return 0;
    int n1=max(0,tr(root->left,ans));
    int n2=max(0,tr(root->right,ans));
    ans=max(ans,n1+n2+root->val);
    return root->val+max(n1,n2);
}
    int maxPathSum(TreeNode* root) {
           //soething like diameter thing
           int ans=INT_MIN;
           int val=tr(root,ans);
           return ans;
    }
};