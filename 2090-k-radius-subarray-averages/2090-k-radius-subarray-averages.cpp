class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        long long sum = 0;
        int window = 2 * k + 1;
        int n = nums.size();
        vector<int> avg(n, -1);

        if (window > n)
            return avg;

        for (int i = 0; i < window; i++)
            sum += nums[i];

        for (int i = k; i + k < n; i++) {
            avg[i] = sum / window;

            if (i + k + 1 < n) {
                sum += nums[i + k + 1];
                sum -= nums[i - k];
            }
        }
        return avg;
    }
};