class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int len = 0;

        for (int i = 0; i < n; i++) {
            unordered_set<int> st;
            for (int j = i; j < n; j++) {
                if (st.count(s[j]))
                    break;

                st.insert(s[j]);
                len = max(len, j - i + 1);
            }
        }
        return len;
    }
};