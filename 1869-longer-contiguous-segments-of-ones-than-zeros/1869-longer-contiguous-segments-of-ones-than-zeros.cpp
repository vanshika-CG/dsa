class Solution {
public:
    bool checkZeroOnes(string s) {
        int len1 = 0, max1 = 0;
        int len0 = 0, max0 = 0;

        for (char c : s) {
            if (c == '1') {
                len1++;
                len0 = 0;
                max1 = max(max1, len1);
            } else {
                len0++;
                len1 = 0;
                max0 = max(max0, len0);
            }
        }
        return max1 > max0;
    }
};