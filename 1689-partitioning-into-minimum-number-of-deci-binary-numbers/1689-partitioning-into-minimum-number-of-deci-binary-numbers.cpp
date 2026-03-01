class Solution {
public:
    int minPartitions(string n) {
        int digit = 0;

        for (char c : n) {
            digit = max(digit, c - '0');
            if (digit == 9)
                return 9;
        }
        return digit;
    }
};