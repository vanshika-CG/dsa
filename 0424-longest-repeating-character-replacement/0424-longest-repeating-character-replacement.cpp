class Solution {
public:
    int characterReplacement(string s, int k) {
        int j = 0;
        int ans = 0;
        int maxfreq = 0;
        unordered_map<char, int> m;

        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
            maxfreq = max(maxfreq, m[s[i]]);

            while ((i - j + 1) - maxfreq > k) {
                m[s[j]]--;
                j++;
            }

            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};