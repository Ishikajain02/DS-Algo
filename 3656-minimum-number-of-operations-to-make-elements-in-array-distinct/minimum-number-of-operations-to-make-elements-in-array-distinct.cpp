class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int,int>s;
        for(int i=0;i<nums.size();i++)s[nums[i]]++;
        if(nums.size()==s.size())return 0;
        if(nums.size()<=3)return 1;
        int ans=0;
        //s -{
        //2-1
        //3-2
        //4-1
        //5-1
        //7-1}
        //nums.size==9
        for(int i=0;i<nums.size();){
          int val=0;//i=3
          cout<<s.size()<<" "<<nums.size()-i<<endl;
            if(s.size()==nums.size()-i)break;//5//6
          ans++;//1
          while(val<=2 && val+i<nums.size()){
            s[nums[i+val]]--;
            if(s[nums[i+val]]==0)
            s.erase(nums[i+val]);
            val++;
          }
          
        
          i+=3;//6
        }
        return ans;
    }
};