class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxlen = 0;
        int len = 0;

        int j = 0;
        unordered_set<char> st;

        for (int i = 0; i < n; i++) {

            while (st.count(s[i])) {
                st.erase(s[j]);
                j++;
            }

            st.insert(s[i]);
            len = i - j + 1;
            maxlen = max(len, maxlen);
        }
        return maxlen;
    }
};