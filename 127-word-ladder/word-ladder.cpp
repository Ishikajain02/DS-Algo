class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>s;
        for(int i=0;i<wordList.size();i++){
            s.insert(wordList[i]);
        }
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        s.erase(beginWord);
        while(!q.empty()){
            string top=q.front().first;
            int steps=q.front().second;
            q.pop();
            if(top==endWord)return steps;
            for(int i=0;i<top.size();i++){
                char ch=top[i];
                for(char v='a';v<='z';v++){
                    top[i]=v;
                    if(s.find(top)!=s.end()){
                    q.push({top,steps+1});
                    s.erase(top);

                    }
                }
                top[i]=ch;
            }
        }
        return 0;
    }
};