class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int num = x;
        long long a = 0;

        while (num) {
            int d = num % 10;
            a = (a * 10) + d;
            num /= 10;
        }
        if (a == x)
            return true;
        return false;
    }
};