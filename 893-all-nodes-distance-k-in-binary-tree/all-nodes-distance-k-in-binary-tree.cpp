/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<int,vector<int>>mp;
        graphing(mp,root);
       // vector<bool>vis(mp.size(),false);
        queue<int>q;
        unordered_map<int, bool> vis;
        vector<int>ans;
        if(!root)return ans;
        q.push(target->val);
        int d=0;
        vis[target->val]=true;
        while(!q.empty()){
            int size=q.size();
            if(d==k)break;
            while(size--){
           int src=q.front();
           q.pop();
          for(int i=0;i<mp[src].size();i++){
            if(!vis[mp[src][i]]){
                q.push(mp[src][i]);
                vis[mp[src][i]]=true;
            }
          }
            }
          d++;

        }
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};