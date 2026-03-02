class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0, maxsum = 0;
        int n = nums.size();
        unordered_map<int, int> m;
        int left = 0;

        for (int right = 0; right < n; right++) {
            m[nums[right]]++;
            sum += nums[right];

            while (m[nums[right]] > 1 || right - left + 1 > k) {
                m[nums[left]]--;
                sum -= nums[left];
                left++;
            }

            if (right - left + 1 == k)
                maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};