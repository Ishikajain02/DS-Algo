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
void fn(TreeNode* root,string curr,string &mini){
    if(!root)return;
    if(!root->left && !root->right){
        curr+=char(root->val+'a');
        reverse(curr.begin(),curr.end());
        if(mini>curr)mini=curr;
        return;
    }
    fn(root->left,curr+char(root->val+'a'),mini);
    fn(root->right,curr+char(root->val+'a'),mini);

}
    string smallestFromLeaf(TreeNode* root) {
    string mini="~";
    string curr="";
    fn(root,curr,mini);
    // reverse(mini.begin(),mini.end());
    return mini;
    }
};