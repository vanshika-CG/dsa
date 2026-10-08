class Solution {
public:
    int merge(vector<int>& nums, int l, int mid, int r) {
        int bestl = INT_MIN;
        int sum = 0;

        for (int i = mid; i >= l; i--) {
            sum += nums[i];
            bestl = max(bestl, sum);
        }

        sum = 0;
        int bestr = INT_MIN;

        for (int i = mid + 1; i <= r; i++) {
            sum += nums[i];
            bestr = max(bestr, sum);
        }

        return bestl + bestr;
    }

    int divide(vector<int>& nums, int l, int r) {

        if (l == r)
            return nums[l];

        int mid = l + (r - l) / 2;

        int left = divide(nums, l, mid);
        int right = divide(nums, mid + 1, r);

        int crossmax = merge(nums, l, mid, r);

        return max({crossmax, left, right});
    }

    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        return divide(nums, 0, n - 1);
    }
};