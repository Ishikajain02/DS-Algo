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
    TreeNode* reverseOddLevels(TreeNode* root) {
        //simply bfs search (levelwise then reverse the odd levels)
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int size=q.size();
          vector<TreeNode*>vc;
          while(size--){
            vc.push_back(q.front());
            if(q.front()->left)q.push(q.front()->left);
            if(q.front()->right)q.push(q.front()->right);
            q.pop();
          }
          if(level%2==1){
            int i=0,j=vc.size()-1;
            while(i<j){
                int temp=vc[j]->val;
                vc[j]->val=vc[i]->val;
                vc[i]->val=temp;
                i++;
                j--;
            }
          }
          level++;
        }
        return root;
    }
};