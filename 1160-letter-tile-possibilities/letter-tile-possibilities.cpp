class Solution {
public:
void fn(string tiles ,vector<bool>&used,string curr,set<string>&st){
st.insert(curr);
for(int pos=0;pos<tiles.size();pos++){
    if(!used[pos]){
        used[pos]=true;
        fn(tiles,used,curr+tiles[pos],st);
        used[pos]=false;
    }
}
return;
}
    int numTilePossibilities(string tiles) {
        set<string>st;
        vector<bool>used(tiles.size(),false);
        string curr="";
        fn(tiles,used,curr,st);
        return st.size()-1;

    }
};