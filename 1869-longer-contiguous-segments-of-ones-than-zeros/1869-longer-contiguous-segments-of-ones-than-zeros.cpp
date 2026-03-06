class Solution {
public:
    bool checkZeroOnes(string s) {
        int len1 = 0;
        int len0 = 0;
        int j = INT_MIN, k = INT_MIN;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                len1++;
                j = max(len1, j);
            }
            if (s[i] == '0') {
                j = max(len1, j);
                len1 = 0;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                len0++;
                k = max(len0, k);
            }
            if (s[i] == '1') {
                k = max(len0, k);
                len0 = 0;
            }
        }
        cout << j << endl << k;
        return (j > k) ? true : false;
    }
};