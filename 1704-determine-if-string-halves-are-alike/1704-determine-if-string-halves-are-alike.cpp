class Solution {
public:
    bool halvesAreAlike(string s) {
        int c = 0;
        int l = 0, r = s.size() - 1;

        while (l < r) {
            if (isvowel(s[l]))
                c++;
            if (isvowel(s[r]))
                c--;
            l++;
            r--;
        }
        return c == 0;
    }

private:
    bool isvowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        return false;
    }
};