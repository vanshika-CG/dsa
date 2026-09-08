class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = nums.size();
        m[0] = -1;
        int sum = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                sum--;
            else
                sum++;

            if (m.count(sum))
                ans = max(ans, i - m[sum]);
            else
                m[sum] = i;
        }

        return ans;
    }
};