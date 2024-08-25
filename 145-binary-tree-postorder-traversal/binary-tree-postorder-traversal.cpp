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
    void order(TreeNode*root,vector<int>&vc){
        if(!root)return;
        order(root->left,vc);
        order(root->right,vc);
        vc.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>vc;
        order(root,vc);
        return vc;
    }
};