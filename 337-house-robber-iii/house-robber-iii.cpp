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
map<TreeNode*,int>mp;
    int rob(TreeNode* root) {
        //simplest trick for take and not take approach simpler solution
        if(!root)return 0;
        if(mp[root]!=0)return mp[root];
        int leftsub=0,rightsub=0;
        if(root->left){
             leftsub=rob(root->left->left)+rob(root->left->right);
        }
        if(root->right){
             rightsub=rob(root->right->left)+rob(root->right->right);
        }
        int max1=root->val+leftsub+rightsub;
        int max2=rob(root->left)+rob(root->right);
        return mp[root]=max(max1,max2);
    }
};