/*class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int i=0,j=costs.size()-1;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int cand=candidates;
        while(i<costs.size() && cand-- && j>=0){
            if(i==j){
                pq.push({costs[i],i});
                      break;
            }
            pq.push({costs[i],i});
            i++;
            pq.push({costs[j],j});
            j--;
        }
        int ans=0;
     /*   while(k--){
            ans+=pq.top().first;
            int ind=pq.top().second;
            pq.pop();
            if(i==j)continue;
            else{
                if(i>ind && j>ind){
                    pq.push({costs[i],i});
                    i++;
                }
                else{
                    pq.push({costs[j],j});
                    j--;
                }
            }
        }
        if(costs.size()==pq.size()){
            while(k--){
                ans+=pq.top().first;
                pq.pop();
            }
            return ans;
        }
        while(k--){
    ans += pq.top().first;
    int ind = pq.top().second;
    pq.pop();
    
    if(i > j) continue; // Ensuring i does not surpass j
    
    if(ind >= i){ // If the popped index was from the left section
         pq.push({costs[j], j});
        j--;
    } else { // If the popped index was from the right section
     
          pq.push({costs[i], i});
        i++;
    }
}
        return ans;
    }
};*/
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int i = 0, j = costs.size() - 1;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // Push the first 'candidates' elements from both sides
        for (int cnt = 0; cnt < candidates && i <= j; cnt++) {
            pq.push({costs[i], i});
            i++;
            if (i <= j) { // Avoid duplicate insert when i == j
                pq.push({costs[j], j});
                j--;
            }
        }

        long long ans = 0;

        // Process 'k' elements
        while (k--) {
            auto [cost, idx] = pq.top();
            pq.pop();
            ans += cost;

            // Add new elements from either side
            if (i <= j) {
                if (idx < i) { // Came from the left
                    pq.push({costs[i], i});
                    i++;
                } else { // Came from the right
                    pq.push({costs[j], j});
                    j--;
                }
            }
        }

        return ans;
    }
};