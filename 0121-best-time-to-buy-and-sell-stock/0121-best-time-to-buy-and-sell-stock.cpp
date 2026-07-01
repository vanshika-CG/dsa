class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mini = prices[0];

        for (int p : prices) {
            mini = min(mini, p);

            profit = max(profit, p - mini);
        }

        return profit;
    }
};