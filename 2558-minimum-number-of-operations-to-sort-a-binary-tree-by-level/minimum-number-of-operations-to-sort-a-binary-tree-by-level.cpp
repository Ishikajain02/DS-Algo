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
    int minimumOperations(TreeNode* root) {
        int num=1;
        //simply bfs
        int ans=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>vc;
            while(size--){
             TreeNode* node=q.front();
             q.pop();
             if(node->left)q.push(node->left);
             if(node->right)q.push(node->right);
             //algo for min swaps
        vc.push_back(node->val);
            }
            vector<int>n=vc;
            sort(vc.begin(),vc.end());
            map<int,int>mp;
            for(int i=0;i<vc.size();i++)mp[n[i]]=i;
          for(int i=0;i<vc.size();i++){
            if(mp[vc[i]]!=i){
                ans++;
                int ind=mp[vc[i]];
                int key=n[i];
                mp[key]=ind;
                mp[vc[i]]=i;
                n[ind]=key;
                n[i]=vc[i];
               cout<<vc[i]<<" ";
            }
          }
        }
        return ans;
    }
};