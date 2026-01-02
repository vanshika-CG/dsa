class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int curr = prices[0];

        for(int i = 1 ; i < prices.size(); i++){
            if(prices[i] < curr) curr = prices[i];
            else if(curr < prices[i]){
                profit += (prices[i] - curr);
                curr = prices[i];
            }          
        }
        return profit;
    }
};