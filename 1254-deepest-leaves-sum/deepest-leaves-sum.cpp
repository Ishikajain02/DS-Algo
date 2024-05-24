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
int height(TreeNode*root,int h){
    if(!root)return h;
    int lefth=height(root->left,h+1);
    int righth=height(root->right,h+1);
    return max(lefth,righth);
}
/*
//BFS SOLUTION
void sumi(TreeNode*root,int &sum,int h){
    queue<TreeNode*>q;
    if(!root)return;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        h--;
        while(size--){
            
            TreeNode* t=q.front();
            if(h==0)sum+=t->val;
            q.pop();
            if(t->left)q.push(t->left);
            if(t->right)q.push(t->right);
        }
    }
}
*/
//DFS SOLUTION
void solve(TreeNode*root,int start,int& h,int &sum){
    if(!root)return;
    if(start==h)sum+=root->val;
    solve(root->left,start+1,h,sum);
    solve(root->right,start+1,h,sum); 
}
    int deepestLeavesSum(TreeNode* root) {
        int fin=height(root,0);
        int sum=0;
        solve(root,1,fin,sum);
        return sum;
    }
};