class Solution {
public:
    int arrangeCoins(int n) {
        long sum = 0;
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
            if (sum == n) {
                ans++;
                return ans;
            } else if (sum < n)
                ans++;
            else
                break;
        }
        return ans;
    }
};