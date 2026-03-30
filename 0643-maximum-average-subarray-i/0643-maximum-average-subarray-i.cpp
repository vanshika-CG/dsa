class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int maxsum = INT_MIN;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (i >= k) {
                sum -= nums[i - k];
            }

            if (i >= k - 1)
                maxsum = max(sum, maxsum);
        }
        return (double)maxsum / k;
    }
};