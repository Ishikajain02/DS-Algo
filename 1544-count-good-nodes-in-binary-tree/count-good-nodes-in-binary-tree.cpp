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
void traversal(TreeNode*root,int &num,int maxi){
    if(!root)return ;
    if(root->val>=maxi)num++;
    maxi=max(maxi,root->val);
    traversal(root->left,num,maxi);
    traversal(root->right,num,maxi);
}
    int goodNodes(TreeNode* root) {
        int num=0;
        traversal(root,num,INT_MIN);
        return num;
    }
};