class Solution {
public:
    int AtMost(vector<int>& nums, int k) {
        int n = nums.size();
        int j = 0;
        int c = 0;
        int ans = 0;

        if (k < 0)
            return 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] % 2)
                c++;

            while (c > k) {
                if (nums[j] % 2)
                    c--;
                j++;
            }
            ans += (i - j + 1);
        }
        return ans;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return AtMost(nums, k) - AtMost(nums, k - 1);
    }
};