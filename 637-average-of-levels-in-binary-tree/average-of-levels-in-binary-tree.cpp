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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<double>vc;
        while(!q.empty()){
            int size=q.size();
            int sizeee=size;
            double value=0;
            while(size--){
                TreeNode*top=q.front();
                q.pop();
                value+=top->val;
                if(top->left)q.push(top->left);
                if(top->right)q.push(top->right);
            }
            value/=sizeee;
            vc.push_back(value);
        }
        return vc;
    }
};