class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long ans = 0;
        int mini = nums[0];
        int maxi = nums[0];

        for (int num : nums) {
            mini = min(mini, num);
            maxi = max(maxi, num);
        }

        ans = (long long)k * (maxi - mini);
        return ans;
    }
};