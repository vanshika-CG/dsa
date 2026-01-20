class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n = s.size();
        string ans = "";

        for (int i = 0; i < s[0].size(); i++) {
            char c = s[0][i];
            for (int j = 1; j < n; j++) {
                if (c != s[j][i])
                    return ans;
            }
            ans += c;
        }
        return ans;
    }
};