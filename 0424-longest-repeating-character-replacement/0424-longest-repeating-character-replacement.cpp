class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int, int> m;
        int maxfreq = 0;
        int i = 0;
        int maxlen = 0;

        for (int j = 0; j < s.size(); j++) {
            m[s[j]]++;
            maxfreq = max(maxfreq, m[s[j]]);

            while ((j - i + 1) - maxfreq > k) {
                m[s[i]]--;
                i++;
            }
            maxlen = max(maxlen, j - i + 1);
        }

        return maxlen;
    }
};