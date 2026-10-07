class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        for (int num : nums)
            s.insert(num);

        int ans = 0;

        for (int num : s) {

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