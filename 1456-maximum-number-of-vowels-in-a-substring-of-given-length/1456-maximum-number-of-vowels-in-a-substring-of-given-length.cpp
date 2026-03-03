class Solution {
public:
    int maxVowels(string s, int k) {
        int ans = 0;
        int maxans = 0;

        for (int i = 0; i < k; i++) {
            if (vowel(s[i]))
                ans++;
        }

        maxans = ans;

        for (int i = k; i < s.size(); i++) {
            if (vowel(s[i]))
                ans++;
            if (vowel(s[i - k]))
                ans--;

            maxans = max(ans, maxans);
        }

        return maxans;
    }

private:
    bool vowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;

        return false;
    }
};