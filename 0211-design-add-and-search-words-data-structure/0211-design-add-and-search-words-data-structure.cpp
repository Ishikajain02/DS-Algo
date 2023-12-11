class TrieNode{
    public :
    char data;
    bool terminal;
    TrieNode ** children;
    TrieNode(char data){
        children = new TrieNode*[26];
        this->data=data;
        terminal = false;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
    }
};


class WordDictionary {
public:
TrieNode *root;
    WordDictionary() {
          root= new TrieNode('\0');
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
   
    void addWord(string word) {
         insert(root,word);
    }
    
    bool search(string word) {
         return search( 0,root,word);
    }
     bool search(int indx,TrieNode *root,string word) {
        if(word.length()==indx){
           return root->terminal;
        }
        //TrieNode* child;
        //int index= word[0]-'a';
        for(int i=indx;i<word.size();i++){
            if(word[i]=='.'){
                for(int j=0;j<26;j++){
                    if(root->children[j]!=NULL){
                        if(search(i+1,root->children[j],word))return true;
                    }
                }
            
            return false;
            }
            else{
                if(root->children[word[i]-'a']==NULL)return false;
               root =  root->children[word[i]-'a'];
            }
        }
        return root->terminal;
     }
     
    
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */