
   class Solution {
public:
    #define ll long long

    bool canAchieveMinScore(vector<int>& points, ll maxMoves, ll minScoreCandidate) {
        int n = points.size();
        ll totalMovesUsed = 0;   // total moves needed so far
        ll carryVisits = 0;      // extra visits carried over to this game
        ll bonusMoves = 0;       // bonus moves from previous games
        
        for (int i = 0; i < n; i++) {
            // Calculate the required visits for the i-th game to reach minScoreCandidate.
            ll requiredVisits = (minScoreCandidate + points[i] - 1) / points[i]; 
            if (carryVisits >= requiredVisits) {
              
                carryVisits = 0;
                bonusMoves++;
            } else {
                // Calculate the current score contributed by the carried visits.
                ll currentScore = points[i] * carryVisits;
                ll remainingScoreNeeded = minScoreCandidate - currentScore;
                requiredVisits = (remainingScoreNeeded + points[i] - 1) / points[i];
                
                totalMovesUsed += requiredVisits * 2 - 1;
                if(totalMovesUsed > maxMoves)
                    return false; 
                
                carryVisits = max(requiredVisits - 1, 0LL);
                totalMovesUsed += bonusMoves;  // add any bonus moves from previous games
                if(totalMovesUsed > maxMoves)
                    return false; 
                bonusMoves = 0;  
            }
        }
        return totalMovesUsed <= maxMoves;
    }
   
    long long maxScore(vector<int>& points, int m) {
        int n = points.size();
        ll low = 0;
        ll high = 1e15;  // high bound for binary search on candidate minimum gameScore
        ll minPoint = *min_element(points.begin(), points.end());
        ll ans = high;
        
        // Binary search for the maximum achievable minimum score.
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (canAchieveMinScore(points, m, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        if (m == n) {
            return max(ans, minPoint);
        }
        return ans;
    }
};