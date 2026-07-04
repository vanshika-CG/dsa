class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int j = 0;
        int c = 0;
        int len = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                len++;
            else if (c <= k) {
                c++;
            }

            while (c > k) {
                if (nums[j] == 1)
                    len--;
                else
                    c--;
                j++;
            }

            ans = max(ans, len + c);
        }
        return ans;
    }
};