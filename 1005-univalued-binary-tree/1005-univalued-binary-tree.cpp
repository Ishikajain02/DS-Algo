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
    void traversal(TreeNode* root,vector<int>&v){
        if(!root)return;
        traversal(root->left,v);
        v.push_back(root->val);
        traversal(root->right,v);
    }
    bool isUnivalTree(TreeNode* root) {
        int a = root->val;
        vector<int>y;
        traversal(root,y);
        for(int i=0;i<y.size();i++){
            if(y[i]==a)continue;
            else return false;
        }
        return true;
    }
};