class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int l = 0, r = n - 1;

        while (l < r) {
            if (!isvowel(s[l]))
                l++;
            if (!isvowel(s[r]))
                r--;

            if (isvowel(s[l]) && isvowel(s[r])) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }

    bool isvowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;

        return false;
    }
};