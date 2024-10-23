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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        //bfs traversall
        TreeNode*temp=root;
        priority_queue<pair<long ,long>>q;
       // q.push({root->val,0});
        queue<TreeNode*>pq;
        pq.push(root);
        int lvl=0;
        while(!pq.empty()){
            //TreeNode*top=pq.front();
           // pq.pop();
            long size=pq.size();
            long  sum=0;
            while(size--){
                sum+=pq.front()->val;
               if(pq.front()->left)pq.push(pq.front()->left);
               if(pq.front()->right)pq.push(pq.front()->right);
               pq.pop();
            }
            q.push({sum,lvl});
            lvl++;
        }
      if(k>q.size())return -1;
      long long ans=0;
      while(!q.empty() && k--){
        ans=q.top().first;
        q.pop();
        cout<<ans<<endl;
      }
      return ans;
    }
};