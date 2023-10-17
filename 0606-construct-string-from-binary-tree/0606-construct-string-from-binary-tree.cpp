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
void fn (string &val , TreeNode*root){
   if(!root)return;
   string ans = to_string(root->val);
   val+= ans;
   if(root->left!=NULL && root->right!= NULL){
    val+="(";
    fn(val,root->left);
    val+=")";
    val+="(";
    fn(val,root->right);
    val+=")";
   }
   else if (root->left){
       val+="(";
       fn(val,root->left);
       val+=")";
   }
   else if(root->right){
       val+="()";
       val+="(";
       fn(val,root->right);
       val+=")";
   }
}
    string tree2str(TreeNode* root) {
        string s;
        fn(s,root);
        return s;
    }
};