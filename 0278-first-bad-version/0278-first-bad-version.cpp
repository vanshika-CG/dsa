// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans = -1;
        int l = 1, r = n;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            int x = isBadVersion(mid);

            if (x) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};