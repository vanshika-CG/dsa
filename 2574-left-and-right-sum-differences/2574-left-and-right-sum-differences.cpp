class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int rs = 0;
        int ls = 0;

        for (int i = 0; i < n; i++) {
            ans[i] = ls;
            ls += nums[i];
        }

        for (int j = n - 1; j >= 0; j--) {
            ans[j] = abs(ans[j] - rs);
            rs += nums[j];
        }
        return ans;
    }
};