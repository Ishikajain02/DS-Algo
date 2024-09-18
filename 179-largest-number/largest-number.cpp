class Solution {
public:
 static bool cmp(const string &a,const string &b){
    return a+b>b+a;
  }
    string largestNumber(vector<int>& nums) {
        vector<string>vc;
        for(int i=0;i<nums.size();i++){
            vc.push_back(to_string(nums[i]));
        }
        sort(vc.begin(),vc.end(),cmp);
        //largest number
      /*  priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++){
            string st=to_string(nums[i]);
            int size=st.size();
            pq.push({nums[i]%size-1,i});
        }
        string ans="";
        while(!pq.empty()){
          int top= pq.top().second;
        ans+=to_string(nums[top]);
        pq.pop();
        }
        return ans;*/
        //not working bcoz of same num digits
        string ans="";
        for(int i=0;i<vc.size();i++){
            ans+=vc[i];
        }
        if(vc[0]=="0")return "0";
        return ans;
    }
};