class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        //odd no days gain Z weight
        //even number of day Y weight
        //take first 1 highest and remaining smallest
        int total=pizzas.size();
        //take two heaps
        //maxheap [5,4,4,3,3,3,2,2,2,2,1]
        //minheap [,2,2,3,3,3,4,4,5,5]

        priority_queue<int>maxheap;
        priority_queue<int,vector<int>,greater<int>>minheap;
        for(int i=0;i<total;i++){
            maxheap.push(pizzas[i]);
            minheap.push(pizzas[i]);
        }
        long long ans=0;
        int pair=total/4;
        
        int odd=pair/2;
        if(pair%2!=0)odd++;
        int even=pair/2;
        while(odd--){
            ans+=maxheap.top();
            maxheap.pop();
        }
        while(even--){
            maxheap.pop();
            ans+=maxheap.top();
            maxheap.pop();
        }
        return ans;
    }
};