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
void solve(int parent,int grandparent,int &sum,TreeNode*root){
    if(!root)return;
    if(grandparent%2==0)sum+=root->val;
    grandparent=parent;
    parent=root->val;
    solve(parent,grandparent,sum,root->left);
    solve(parent,grandparent,sum,root->right);
    


}
    int sumEvenGrandparent(TreeNode* root) {
        int parent=-1,grandparent=-1, sum=0;
        solve(parent,grandparent,sum,root);
        return sum;
    }
};