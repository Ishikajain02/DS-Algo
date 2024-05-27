class Solution {
public:
int check(int start,int end,string s,int cnt){
    int left=start;
    int right=end;
    while(left>=0&& right<s.size()&& s[left]==s[right]){
        cnt++;
        left--;
        right++;
    }
    return cnt;
}
    int countSubstrings(string s) {
        //brute force
        int cnt=0;
        for(int i=0;i<s.size();i++){
            //even 
            cnt+=check(i,i+1,s,0);
            cnt+=check(i,i,s,0);
        }
        return cnt;
    }

};