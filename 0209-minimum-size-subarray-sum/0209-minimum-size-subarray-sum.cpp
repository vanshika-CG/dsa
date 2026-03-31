class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = 0, minlen = INT_MAX;
        int sum = 0;
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            while (sum >= target) {
                len = i - j + 1;
                minlen = min(minlen, len);
                sum -= nums[j];
                j++;
            }
        }
        if (minlen == INT_MAX)
            return 0;
        return minlen;
    }
};