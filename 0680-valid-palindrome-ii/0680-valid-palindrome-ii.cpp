class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int l = 0, r = n - 1;

        while (l <= r) {
            if (s[l] == s[r]) {
                l++;
                r--;
            } else {
                return ispalidrome(s, l + 1, r) || ispalidrome(s, l, r - 1);
            }
        }
        return true;
    }

private:
    bool ispalidrome(string s, int l, int r) {
        while (l <= r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};