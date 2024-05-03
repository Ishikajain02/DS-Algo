class Solution {
public:
    int compareVersion(string version1, string version2) {
        int a=0,b=0;
        int ans=0;
        int s1=version1.size(),s2=version2.size();
        while(a<s1 || b<s2){
            int sum1=0,sum2=0;
            while(a<s1 && version1[a]!='.'){
                sum1=(sum1*10+(version1[a]-'0'));
                a++;
            }
            while(b<s2 && version2[b]!='.'){
                sum2=sum2*10+(version2[b]-'0');
                b++;
            }
            if(sum1<sum2)return -1;
            else if(sum1>sum2)return 1;
            a++;
            b++;
        }
      return 0;
    }
};