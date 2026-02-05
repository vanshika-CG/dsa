class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                int move = (i + nums[i]) % n;
                ans[i] = nums[move];
            }
            else if (nums[i] < 0) {
                int move = ((i + nums[i]) % n + n) % n; 
                ans[i] = nums[move];
            }
            else {
                ans[i] = 0;
            }
        }
        return ans;
    }
};
