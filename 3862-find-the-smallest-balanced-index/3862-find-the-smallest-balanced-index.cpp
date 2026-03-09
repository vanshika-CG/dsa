class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        vector<long long> leftsum(n, -1);
        vector<long long> pro(n, -1);
        long long sum = 0, mul = 1;

        for (int i = 0; i < n; i++) {
            leftsum[i] = sum;
            sum += nums[i];
        }
        for (int i = n - 1; i >= 0; i--) {
            pro[i] = mul;
            if (mul > LLONG_MAX / nums[i])
                break;
            mul *= nums[i];
        }

        for (int i = 0; i < n; i++) {
            if (pro[i] == leftsum[i])
                return i;
        }
        return -1;
    }
};