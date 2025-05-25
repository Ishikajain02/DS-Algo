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
int fn(TreeNode*root,int&  tilt){
  if(!root)return 0;
       
        int left=fn(root->left,tilt);
        int right=fn(root->right,tilt);
        tilt+=abs(right-left);
        return root->val+left+right;
}
    int findTilt(TreeNode* root) {
        //sum of tilts
        int tilt=0;
    int ans=  fn(root,tilt);
      return tilt;
       
    }
};