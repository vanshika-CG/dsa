class Solution {
public:
    int trailingZeroes(int n) {
        long long num = factorial(n);
        int count = 0;

        while (num) {
            int q = num % 10;
            if (q == 0)
                count++;
            else
                break;
            num = num / 10;
        }

        return count;
    }

private:
    long long factorial(int n) {
        if (n == 0)
            return 1;
        return factorial(n - 1) * n;
    }
};