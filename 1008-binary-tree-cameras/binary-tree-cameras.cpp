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
int cam=0;
string reply(TreeNode*root){
    if(!root)return "ok";
    string left=reply(root->left);
    string right=reply(root->right);
    if(left=="want" || right=="want"){
        cam++;
        return "provide";
    }
    if(left=="provide" || right=="provide")return "ok";
    else return "want";
}
    int minCameraCover(TreeNode* root) {
        //easiest sol
        string ans=reply(root);
        if(ans=="want")cam++;
        return cam;

    }
};