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
    vector<int> largestValues(TreeNode* root) {
        //simple bfs traversal then storing the largest value among them
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        if(!root)return ans;
        while(!q.empty()){
            int size=q.size();
            vector<int>vc;
            while(size--){
                vc.push_back(q.front()->val);
                if(q.front()->left)q.push(q.front()->left);
                if(q.front()->right)q.push(q.front()->right);
                q.pop();
            }
            sort(vc.begin(),vc.end());
            ans.push_back(vc[vc.size()-1]);
        }
        return ans;
    }
};