class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        if (k < 0)
            return 0;

        int ans = 0;
        int j = 0;
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;

            while (m.size() > k) {
                m[nums[j]]--;
                if (m[nums[j]] == 0)
                    m.erase(nums[j]);
                j++;
            }

            ans += (i - j + 1);
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums, k - 1);
    }
};