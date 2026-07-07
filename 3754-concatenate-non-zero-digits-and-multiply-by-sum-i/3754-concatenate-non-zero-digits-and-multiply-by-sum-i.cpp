class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long num = 0;

        while (n) {
            long long rem = n % 10;
            sum += rem;
            if (rem)
                num = (num * 10) + rem;
            n /= 10;
        }

        long long ans = 0;

        while (num) {
            long long r = num % 10;
            ans = (ans * 10) + r;
            num /= 10;
        }

        return ans * sum;
    }
};