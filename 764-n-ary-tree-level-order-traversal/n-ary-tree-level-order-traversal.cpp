/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>temp;
            while(size--){
            Node *top=q.front();
            temp.push_back(top->val);
            q.pop();
            
            for(int i=0;i<top->children.size();i++){
                q.push(top->children[i]);

            }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};