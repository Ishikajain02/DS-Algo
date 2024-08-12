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
int sum(TreeNode*root){
    if(!root)return 0;
    return root->val+sum(root->left)+sum(root->right);
}
void traversal(TreeNode*root, map<int,int>&mp,int &maxi,int &value){
    if(!root)return;
    int get=sum(root);
     mp[get]++;
     if(mp[get]>maxi){
        maxi=mp[get];
        value=get;
     }
     traversal(root->left,mp,maxi,value);//left
traversal(root->right,mp,maxi,value);//right
}
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int>ans;
       map<int,int>mp;
       int maxi=0;
       int value=0;
       traversal(root,mp,maxi,value);
       for(auto it:mp){
        if(it.first==value|| it.second==maxi)ans.push_back(it.first);
       }
       return ans;
    }
};