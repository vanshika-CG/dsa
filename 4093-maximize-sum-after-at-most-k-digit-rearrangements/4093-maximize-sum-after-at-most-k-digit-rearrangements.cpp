
class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        vector<int> gains;
        gains.reserve(nums.size());
        long long sum = 0;

        for (int x : nums) {
            sum += x;

            int freq[10] = {};
            int n = x;

            while (n > 0) {
                freq[n % 10]++;
                n /= 10;
            }

            int rearranged = 0;

            for (int d = 9; d >= 0; d--) {
                while (freq[d]--) {
                    rearranged = rearranged * 10 + d;
                }
            }

            gains.push_back(rearranged - x);
        }

        nth_element(gains.begin(),
                    gains.begin() + gains.size() - k,
                    gains.end());

        for (int i = gains.size() - k; i < gains.size(); i++) {
            sum += gains[i];
        }

        return sum;
    }
};