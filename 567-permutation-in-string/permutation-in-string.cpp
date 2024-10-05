class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size=s1.size();
        int size2=s2.size();
        sort(s1.begin(),s1.end());
        if(size>size2)return false;
        if(size==size2){
            sort(s2.begin(),s2.end());
            if(s2==s1)return true;
            else return false;
        }
        for(int i=0;i<=size2-size;i++){
            string st="";
            for(int j=i;j<i+size;j++)st+=s2[j];
            sort(st.begin(),st.end());
            if(st==s1)return true;
        }
        return false;
    }
};