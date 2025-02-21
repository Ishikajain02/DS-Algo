class Solution {
public:
void fn(int n,vector<string>&vc,string t){
    if(t.size()>n)return ;
    if(t.size()==n){
        vc.push_back(t);
        return;
    }
   if(t.size()==0 || t.back()!='a') fn(n,vc,t+'a');
  if(t.size()==0 || t.back()!='b')  fn(n,vc,t+'b');
  if(t.size()==0 || t.back()!='c')  fn(n,vc,t+'c');
    return;

}
    string getHappyString(int n, int k) {
        //generate strigs as constraints are smaller than expected
        vector<string>vc;
        fn(n,vc,"");
        sort(vc.begin(),vc.end());
        if(k>vc.size())return "";
        return vc[k-1];
    }
};