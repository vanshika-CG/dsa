class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int ans = 0;

        for (int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }

        int r = cardPoints.size() - 1;

        ans = max(ans, sum);
        
        for (int i = k - 1; i >= 0; i--) {
            sum -= cardPoints[i];
            sum += cardPoints[r];
            r--;
            ans = max(ans, sum);
        }

        return ans;
    }
};