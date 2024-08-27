class Solution {
public:
    // Function to find the vertex with the maximum weight value
    int findmv(const vector<double>& weight, const vector<bool>& visited) {
        int mv = -1;
        for (int i = 0; i < weight.size(); i++) {
            if (!visited[i] && (mv == -1 || weight[i] > weight[mv])) {
                mv = i;
            }
        }
        return mv;
    }

    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        // Maximum path probabilities
        vector<bool> visited(n, false);
        vector<double> weight(n, 0.0);
        vector<vector<pair<int, double>>> adj(n); // adjacency list

        // Build adjacency list
        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        priority_queue<pair<double,int>>pq;

        weight[start_node] = 1.0;
        pq.push({weight[start_node],start_node});
       // for (int i = 0; i < n; i++) {
          while(!pq.empty()){
            int mv=pq.top().second;
            double dis=pq.top().first;
            visited[mv] = true;
            pq.pop();
            for (const auto& edge : adj[mv]) {
                int neighbor = edge.first;
                double prob = edge.second;
                if (!visited[neighbor] && weight[neighbor] < weight[mv] * prob) {
                    weight[neighbor] = weight[mv] * prob;
                    pq.push({weight[neighbor],neighbor});
                }
            }
        }

        return weight[end_node];
    }
};
