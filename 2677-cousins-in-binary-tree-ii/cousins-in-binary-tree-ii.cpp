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
vector<int> mp = vector<int>(100000, 0);
void travel(TreeNode*root,vector<int>&mp,int lvl){
    if(!root)return;
    
    if(root->left && root->right){
        if(lvl==0 || lvl==1){
            root->left->val=0;
            root->right->val=0;
        }
     else{   root->left->val=mp[lvl]-(root->left->val+root->right->val);
        root->right->val=root->left->val;
     }
    }
    else if(root->left){
        if(lvl==0|| lvl==1)root->left->val=0;
      else  root->left->val=mp[lvl]-root->left->val;
    }
    else if(root->right){
        if(lvl==0 || lvl==1 )root->right->val=0;
       else root->right->val=mp[lvl]-root->right->val;
    }
    travel(root->left,mp,lvl+1);
    travel(root->right,mp,lvl+1);
}
    TreeNode* replaceValueInTree(TreeNode* root) {
        TreeNode*temp=root;
        //storing the values in a map
     //   map<int,int>mp;
        int levl=0;
    queue<TreeNode*>q;
    q.push(root);
    int l=0;
    while(!q.empty()){
        int size=q.size();
        int sum=0;
        while(size--){
            sum+=q.front()->val;
            if(q.front()->left)q.push(q.front()->left);
            if(q.front()->right)q.push(q.front()->right);
            q.pop();
        }
        mp[l]=sum;
        l++;
    }
    root->val=0;
    int lvl=1;
  //  for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
  travel(temp,mp,lvl);
  return root;
    }
};