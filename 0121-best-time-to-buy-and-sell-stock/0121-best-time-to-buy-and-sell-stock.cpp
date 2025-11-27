class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr = prices[0];
        int profit =0;
        for(int i=0; i<prices.size(); i++){
            if(curr > prices[i]) curr = prices[i];
            profit = max(profit , prices[i] - curr);
        }
        return profit;
    }
};