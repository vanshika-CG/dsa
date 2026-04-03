class Solution {
public:
    int numSquares(int n) {

        if (issquare(n))
            return 1;

        for (int i = 1; i * i < n; i++) {
            if (issquare(n - i * i))
                return 2;
        }

        while (n % 4 == 0) {
            n /= 4;
        }

        if (n % 8 == 7)
            return 4;

        return 3;
    }

private:
    bool issquare(int n) {
        int x = sqrt(n);
        return x * x == n;
    }
};