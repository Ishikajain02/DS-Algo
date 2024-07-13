/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
Node* fn(Node* node,map<Node*,Node*>&mp){
    if(node==nullptr)return node;
    Node* copy=new Node(node->val);
    mp[node]=copy;
    queue<Node*>q;
    q.push(node);
    while(!q.empty()){
        Node *top=q.front();
        q.pop();
        for(Node*temp:top->neighbors){
            if(mp.find(temp)==mp.end()){
                Node*dupe=new Node(temp->val);
                q.push(temp);
                mp[temp]=dupe;
            }
            mp[top]->neighbors.push_back(mp[temp]);

        }

    }
    return copy;
}
    Node* cloneGraph(Node* node) {
        map<Node*,Node*>mp;

        return fn(node,mp);
    }
};