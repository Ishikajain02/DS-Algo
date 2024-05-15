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
int xlevel=0,ylevel=0;
TreeNode*parent1,*parent2;

void dfs(TreeNode* root,int x,int y,TreeNode* parent,int lvl){
  if(!root){
    return;
  }
  if(root->val==x){
  xlevel=lvl;
  parent1=parent;
  }
  if(root->val==y){
    ylevel=lvl;
    parent2=parent;
  }
  dfs(root->left,x,y,root,lvl+1);
  dfs(root->right,x,y,root,lvl+1);
}
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root,x,y,nullptr,0);
        if(xlevel==ylevel){
            if(parent1!=parent2)return true;
        }
        return false;
    }
};