class Node{
public:
 Node*left;
 Node*right;
 int val;
 Node(int val){
    this->val=val;
    this->left=nullptr;
    this->right=nullptr;
 }
};

class Solution {
public:
    //make a tree
    void print(Node*root){
        if(root==nullptr)return;
        cout<<root->val<<" ";
        print(root->left);
        print(root->right);
    }
    int traversal(Node*root,map<Node*,int>&mp ){
        if(root==nullptr)return 0;
        if(mp[root]!=0)return mp[root];
        return mp[root]=1+traversal(root->left,mp)+traversal(root->right,mp);
    }
    int countHighestScoreNodes(vector<int>& parents) {
        vector<Node*>ref(parents.size());
        map<Node*,int>mp;
        Node* root=new Node(0);
        for(int i=0;i<parents.size();i++){
            if(parents[i]==-1){
                ref[i]=root;
            }
            else{
                ref[i]=new Node(i);
            }
        }
        for(int i=1;i<parents.size();i++){
            if(ref[parents[i]]->left==NULL){
                ref[parents[i]]->left=ref[i];
            }
            else{
                ref[parents[i]]->right=ref[i];
            }
        }
        int cnt=1;
        long long data=0;
        vector<long long>ans;
        int cat=traversal(root,mp);
        for(int i=0;i<parents.size();i++){
            long long count1=mp[ref[i]->left];
            long long count2=mp[ref[i]->right];
          //  cout<<count1<<count2<<endl;
            long long f=1;
           // long long val=1;
            if(count1+count2!=parents.size()-1){
                f=(parents.size()-1)-(count1+count2);
            }
         
            if(count1==0)count1=1;
            if(count2==0)count2=1;
            long long to_be=((count1*count2)*f);
            if(data>to_be)continue;
            else if(to_be>data){
                data=to_be;
                cnt=1;
            }
            else cnt++;
            cout<<data<<endl;
        }
        
        
        //tree printing
       // print(root);
        return cnt;
    }
};