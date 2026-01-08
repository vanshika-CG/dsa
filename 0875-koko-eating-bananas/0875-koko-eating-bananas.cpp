class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r = INT_MIN;

        for (int i = 0; i < piles.size(); i++) {
            if (piles[i] > r)
                r = piles[i];
        }

        int l = 1;
        int ans = r;
        while (l <= r) {
            int mid = l + (r - l) / 2;

            long long total = 0;
            for (int p : piles) {
                total += (p + mid - 1) / mid;
            }

            if (total <= h) {
                ans = mid;
                r = mid - 1;
            } else
                l = mid + 1;
        }

        return ans;
    }
};