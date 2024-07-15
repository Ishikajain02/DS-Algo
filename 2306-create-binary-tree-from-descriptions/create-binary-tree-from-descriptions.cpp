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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
     //root is 80;
     map<int,TreeNode*>mp;
     set<int>s;
     
     for(int i=0;i<descriptions.size();i++){
      int parent=descriptions[i][0];
      int child=descriptions[i][1];
      int left=descriptions[i][2];
      if(mp.find(parent)==mp.end()){
        mp[parent]=new TreeNode(parent);
        
      }
      if(mp.find(child)==mp.end()){
        mp[child]=new TreeNode(child);
      }
      if(left==1){
        mp[parent]->left=mp[child];
      }
      if(left==0)mp[parent]->right=mp[child];
      s.insert(child);
     }
     for(auto it:mp){
        if(s.find(it.first)==s.end()){
            return it.second;
        }
     }   
    return nullptr;
    }
};