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
    TreeNode* traval(unordered_map<int,int>&mp, vector<int>&postorder, int &i , int start ,int end){
        if(i<0 || start > end)return NULL;
        
        int dcurr = postorder[i];
        TreeNode* n = new TreeNode(dcurr);
        i--;
        int pos = mp[dcurr];
        n->right = traval(mp, postorder, i ,pos+1, end);
        n->left = traval(mp, postorder ,i,start , pos-1);
        
        return n;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp.insert({inorder[i],i});
        }
        int i=postorder.size()-1;
        return traval(mp ,postorder, i ,0 , postorder.size()-1);
    }
};