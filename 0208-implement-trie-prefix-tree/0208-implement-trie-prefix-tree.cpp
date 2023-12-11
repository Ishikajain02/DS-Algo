class TrieNode{
    public :
    char data;
    bool terminal;
    TrieNode * children[26];
    TrieNode(char data){
       // children = new TrieNode*[26];
        this->data=data;
        terminal = false;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
    }
};



class Trie {
public:
   TrieNode *root;
    Trie() {
        root= new TrieNode('\0');
    }
    
    void insert(string word) {
        insert(root,word);
    }
    void insert(TrieNode*root,string word){
        if(word.length()==0){
            root->terminal = true;
            return;
        }
        TrieNode *child;
        int index = word[0]-'a';
        if(root->children[index]!=NULL){
            child=root-> children[index];
        }
        else{
           child= new TrieNode(word[0]);
           root->children[index]= child;
        }
        insert(child,word.substr(1));
    }
    bool search(string word){
       return search(root,word);
    }
    bool search(TrieNode *root,string word) {
        if(word.length()==0){
           return root->terminal;
        }
        TrieNode* child;
        int index= word[0]-'a';
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            return false;
        }
        return search(child,word.substr(1));
    }
    
    bool startsWith(string prefix) {
        return startwith(root,prefix);
    }
    bool startwith(TrieNode*root, string word){
        if(word.length()==0)return true;
        TrieNode *child;
        int index= word[0]-'a';
        if(root->children[index]!=NULL)child= root->children[index];
        else return false;
        return startwith(child,word.substr(1));
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */