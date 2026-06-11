class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n <= 1) return n;
        unordered_map<char, int> m;
        int i = 0;
        int maxlen = 0;

        for (int j = 0; j < n; j++) {

            while (m.count(s[j])) {
                m[s[i]]--;
                if (m[s[i]] == 0)
                    m.erase(s[i]);
                i++;
            }

                maxlen = max(maxlen, j - i + 1);
            m[s[j]]++;
        }
        return maxlen;
    }
};