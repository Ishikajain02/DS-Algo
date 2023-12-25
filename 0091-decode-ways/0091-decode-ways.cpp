class Solution {
public:
    int ways(string s,vector<int>&i,int index){
        if(index==s.size())return 1;
        if(i[index]!=-1)return i[index];
       
        int count=0;
        if (s[index]!='0')count+= ways(s,i,index+1);
        if (index+1<s.size()&&( s[index]=='1'|| (s[index]=='2'&& s[index+1]<='6')))
        count+=ways(s,i,index+2);
        return i[index]=count;
        
    }
    int numDecodings(string s) {
        vector<int>i(s.size()+1,-1);
        return ways(s,i,0);
    }
};
    