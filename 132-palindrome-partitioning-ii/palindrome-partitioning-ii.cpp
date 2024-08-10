class Solution {
public:
    bool isPalindrome(string &s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    int cost(string s, int i, int j,vector<vector<int>>&vc) {
        if (i >= j || isPalindrome(s, i, j)) return vc[i][j]=0;
        if(vc[i][j]!=-1)return vc[i][j];
        int minCuts = INT_MAX;
        for (int k = i; k <j; k++) {
            if (isPalindrome(s, i, k)) {  // If s[i...k] is a palindrome
                int cuts = 1 + cost(s, k + 1, j,vc);  // 1 cut and solve for s[k+1...j]
                minCuts = min(minCuts, cuts);
            }
        }

        return vc[i][j]=minCuts;
    }

    int minCut(string s) {
        vector<vector<int>>vc(s.size()+1,vector<int>(s.size()+1,-1));
        return cost(s, 0, s.size() - 1,vc);
    }
};
