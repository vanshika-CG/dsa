class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;

        for (int num : nums) {
            int sum = 0;
            int x = num;

            while (x) {
                sum += (x % 10);
                x = x / 10;
            }
            ans = min(ans, sum);
        }
        return ans;
    }
};