class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int grp=0;
        long long sum=0;
        int cnt=0;
        int prev=0;
        long long prevsum=0;
        for(int i=0;i<grades.size();i++){
            sum+=grades[i];
            cnt++;
                if(cnt>prev && sum>prevsum){
                    prev=cnt;
                    cnt=0;
                    grp++;
                    prevsum=sum;

                }
        }
            return grp;
        }
    
};