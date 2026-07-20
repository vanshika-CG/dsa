class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        long long ans = 0;
        unordered_map<int, int> m;
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            m[nums[i]]++;

            while (m[nums[i]] > 1 || (i - j + 1) > k) {
                m[nums[j]]--;
                sum -= nums[j];
                j++;
            }

            if ((i - j + 1) == k)
                ans = max(ans, sum);
        }
        return ans;
    }
};