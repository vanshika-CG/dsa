class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int current = prices[0];

        for (int i = 0; i < n; i++) {
            if (current > prices[i]) {
                current = prices[i];
            }
            profit = max(profit, prices[i] - current);
        }
        return profit;
    }
};