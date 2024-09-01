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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<pair<int,int>>>mp;
        vector<vector<int>>ans;
        //bfs traversal;
        if(!root)return ans;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int row=0;
      //  mp[0].push_back(root->val);
        while(!q.empty()){
          //  TreeNode*top=q.front();
            int size=q.size();
            while(size--){
                 TreeNode*top=q.front().first;

                 int value=q.front().second;
                 mp[value].push_back({top->val,row});
                 q.pop();
                 if(top->left){
                    q.push({top->left,value-1});
                    
                 }
                 if(top->right){
                    q.push({top->right,value+1});
                 }
            }
            row++;
        }
           vector<pair<int,int>> v;
        for(auto it=mp.begin();it!=mp.end();it++){
            v=it->second;
            sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b)
            {
               if(a.second==b.second)
                   return a.first<b.first;
               else 
                   return a.second<b.second;
            });
            vector<int> v1;
            for(auto i:v){
                v1.push_back(i.first);

            }
            ans.push_back(v1);
            v1.clear();  
        }
        return ans;
    }
};