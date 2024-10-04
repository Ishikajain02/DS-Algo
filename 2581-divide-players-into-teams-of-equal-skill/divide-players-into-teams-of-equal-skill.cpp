class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        // total skill
        // sum is equal and find the skill of each
        sort(skill.begin(), skill.end());
        long left = 0;
        long right = skill.size()-1;
        long sum=0;
        long prev=0;
        while(left<right){
           if(prev==0){
            sum+=(skill[left]*skill[right]);
            prev=skill[left]+skill[right];
            right--;
            left++;
            
           }
           else{
            int ne=skill[left]+skill[right];
            if(ne!=prev)return -1;
            else sum+=(skill[left]*skill[right]);
            left++;
            right--;
           }
        }
        return sum;
    }
};