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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        long long maxi=LONG_MIN;
        while(!q.empty()){
            long long  prev=q.front().second;
            long long curr=q.back().second;
            cout<<prev<<" "<<curr<<endl;
            maxi=max(maxi,curr-prev+1);
            int size=q.size();
            int mm=q.front().second;
            while(size--){
             TreeNode*top=q.front().first;
            long long value=q.front().second-mm;
            q.pop();
            if(top->left!=NULL)q.push({top->left,2*value+1});
            if(top->right!=NULL)q.push({top->right,2*value+2});
            }
           
        }
        return maxi;
    }
};