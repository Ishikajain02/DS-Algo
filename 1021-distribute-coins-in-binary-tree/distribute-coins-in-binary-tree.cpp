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
int moves;
int helper(TreeNode*root){
    if(!root)return 0;
    int leftcoin=helper(root->left);
    int rightcoin=helper(root->right);
    moves+=abs(leftcoin)+abs(rightcoin);
    return (root->val-1)+leftcoin+rightcoin;

}
    int distributeCoins(TreeNode* root) {
      moves=0;
        helper(root);
        return moves;
    }
};