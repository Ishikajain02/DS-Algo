class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long exactamt =
            1LL * cost1 * need1 +
            1LL * cost2 * need2;

        long long onetryamt =
            1LL * max(need1, need2) * costBoth;

        long long mini =
            1LL * min(need1, need2) * costBoth;

        if (need1 > need2) {
            mini += 1LL * (need1 - need2) * cost1;
        } else {
            mini += 1LL * (need2 - need1) * cost2;
        }

        return min(exactamt, min(onetryamt, mini));
    }
};
