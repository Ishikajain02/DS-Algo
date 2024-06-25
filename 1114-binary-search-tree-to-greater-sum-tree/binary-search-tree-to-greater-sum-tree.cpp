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
void traversal(TreeNode* root,vector<int>&ans){
    if(!root)return;
    traversal(root->left,ans);
    ans.push_back(root->val);
    traversal(root->right,ans);
}
void fn(TreeNode*root,vector<int>&ans){
    if(!root)return;
    int sum=0;
    for(int i=0;i<ans.size();i++){
        if(root->val<ans[i]){
            sum+=ans[i];
        }
        else break;
    }
    root->val+=sum;
    fn(root->left,ans);
    fn(root->right,ans);
}
    TreeNode* bstToGst(TreeNode* root) {
        vector<int>ans;
        traversal(root,ans);
        reverse(ans.begin(),ans.end());
        fn(root,ans);
        return root;
    }
};