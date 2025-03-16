class Solution {
public:
bool fn(vector<int>&ranks,int cars,long long mid){
    long long gg=0;
    for(int i=0;i<ranks.size();i++){
        gg+=sqrt(mid/ranks[i]);
    }
    return gg>=cars;
}
    long long repairCars(vector<int>& ranks, int cars) {
        //a rank r can repair  n cars in r*n^2
        long long l=1;
        long long ans=-1;
        long long r=1LL**max_element(ranks.begin(),ranks.end())*cars*cars;
       // cout<<r<<endl;
        while(l<=r){
            long long mid=(l+r)/2;
            if(fn(ranks,cars,mid)==true){

              ans=mid;
              r=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }
};