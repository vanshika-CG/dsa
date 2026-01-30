class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> ans(n);
        int great = 0;

        for (int num : candies)
            if (great < num)
                great = num;

        for (int i = 0; i < n; i++) {
            if (candies[i] + extraCandies >= great)
                ans[i] = true;
            else
                ans[i] = false;
        }
        return ans;
    }
};