class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int> freq(26, 0);
        int maxfreq = 0;
        int len = 0;
        int j = 0;

        for (int i = 0; i < n; i++) {
            freq[s[i] - 'A']++;
            maxfreq = max(maxfreq, freq[s[i] - 'A']);

            while ((i - j + 1) - maxfreq > k) {
                freq[s[j] - 'A']--;
                j++;
            }

            len = max(len, i - j + 1);
        }
        return len;
    }
};