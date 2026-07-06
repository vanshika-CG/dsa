class Solution {
public:
    int AtMost(vector<int>& nums, int k) {
        int n = nums.size();
        if (k < 0) return 0;
        int sum = 0;
        int ans = 0;

        int j = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            while (sum > k) {
                sum -= nums[j];
                j++;
            }
            ans += (i - j + 1);
        }
        return ans;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {

        return AtMost(nums, goal) - AtMost(nums, goal - 1);
    }
};