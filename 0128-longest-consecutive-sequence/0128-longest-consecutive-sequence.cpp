class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 0;

        for (int num : nums) {
            if (s.find(num - 1) == s.end()) {
                int curr = num;
                int len = 1;

                while (s.find(curr + 1) != s.end()) {
                    len++;
                    curr++;
                }
                ans = max(ans, len);
            }
        }
        return ans;
    }
};