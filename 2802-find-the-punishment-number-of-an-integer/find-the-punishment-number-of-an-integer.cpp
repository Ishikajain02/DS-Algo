class Solution {
public:
bool backtrack(int val,string num,int j){
    if(val<0)return false;
    if(val==0 && num=="")return true;
 for(int i=0;i<num.size();i++){
    string sum1=(num.substr(0,i+1));
    string sum2=(num.substr(i+1));
    int left=stoi(sum1);
    if(backtrack(val-left,sum2,0))return true;

 }
 return false;
}
    int punishmentNumber(int n) {
        //simply using the concept of backtracking
        int ans=0;
        for(int i=1;i<=n;i++){
          int square=i*i;
        if(backtrack(i,to_string(square),0))ans+=square;
        }
        return ans;
    }
};