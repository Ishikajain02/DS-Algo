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
class FindElements {
public:
set<int>s;
void dn(set<int>&s,TreeNode*root,int curr){
    if(!root)return;
   if(root->right){
    s.insert(2*curr+2);
    dn(s,root->right,2*curr+2);
   }
   if(root->left){
    s.insert(2*curr+1);
    dn(s,root->left,2*curr+1);
   }

}
    FindElements(TreeNode* root) {
      //  set<int>s;
     if(root)  s.insert(0);
        dn(s,root,0);

    }
    
    bool find(int target) {
        if(s.count(target)!=0)return true;
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */