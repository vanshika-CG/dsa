class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int pre = 1;
        int suff = 1;
        int n = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            pre *= nums[i];
            suff *= nums[n - 1 - i];

            ans = max(ans, max(suff, pre));

            if (suff == 0)
                suff = 1;
            if (pre == 0)
                pre = 1;
        }
        return ans;
    }
};