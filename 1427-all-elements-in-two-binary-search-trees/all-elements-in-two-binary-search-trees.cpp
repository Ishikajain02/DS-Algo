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
   void travel(TreeNode*root,vector<int>&ans){
    if(!root)return;
    ans.push_back(root->val);
    travel(root->left,ans);
    travel(root->right,ans);
   }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        travel(root1,ans);
        travel(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};