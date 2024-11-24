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
     void graphing(map<int,vector<int>>&mp,TreeNode*root){
    if(!root)return;
    if(root->left){
    //    adj[root->val].push_back(root->left->val);
      //  adj[root->left->val].push_back(root->val);
      mp[root->val].push_back(root->left->val);
        mp[root->left->val].push_back(root->val);
    }
    if(root->right){
        mp[root->val].push_back(root->right->val);
        mp[root->right->val].push_back(root->val);
    }
    graphing(mp,root->left);
    graphing(mp,root->right);
  }
    int amountOfTime(TreeNode* root, int start) {
    map<int,vector<int>>mp;
    map<int,bool>vis;
    graphing(mp,root);
    queue<int>q;
    q.push(start);
    vis[start]=true;
    int ans=0;
    while(!q.empty()){
     ans++;
     int size=q.size();
     while(size--){
        int  top=q.front();
        q.pop();
        for(int i=0;i<mp[top].size();i++){
            if(!vis[mp[top][i]]){
                q.push(mp[top][i]);
                vis[mp[top][i]]=true;
            }
        }
     }
    }
    return ans-1;
    }
};