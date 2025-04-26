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
void fn(TreeNode*root,map<int,int>&mp){
    if(!root)return;
    mp[root->val]++;
    fn(root->left,mp);
    fn(root->right,mp);
}
    int findSecondMinimumValue(TreeNode* root) {
        map<int,int>mp;
        fn(root,mp);
        if(mp.size()<=1)return -1;
       return next(mp.begin())->first;


    }
};