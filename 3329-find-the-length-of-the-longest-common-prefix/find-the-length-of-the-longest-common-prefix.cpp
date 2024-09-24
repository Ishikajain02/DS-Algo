class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[10];
        for (int i = 0; i < 10; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    TrieNode *root;

   public:
    Trie() { 
        root = new TrieNode('\0'); 
    }

    void insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            root->isTerminal = true;
            return;
        }

        // Small Calculation
        int index = word[0] - '0';
        TrieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        insertWord(child, word.substr(1));
    }

    void insertWord(string word) { 
        insertWord(root, word); 
    }
    int longprefix(int num){
        string st=to_string(num);
        TrieNode* node=root;
        int len=0;
        for(int i=0;i<st.size();i++){
            if(node->children[st[i]-'0']==nullptr)return len;
            else{
            len++;
            node=node->children[st[i]-'0'];
            } 
            

        }
        return len;
    }
};
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        Trie t1;
        for(int i=0;i<arr1.size();i++){
            t1.insertWord(to_string(arr1[i]));
        }
        int ans=0;
        for(int i=0;i<arr2.size();i++){
          ans=max(t1.longprefix(arr2[i]),ans);


        }
        return ans;
    }
};