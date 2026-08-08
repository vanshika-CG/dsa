class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = "";

        for (int j = 0; j < strs[0].size(); j++) {
            char c = strs[0][j];
            for (int i = 1; i < n; i++) {
                if (c != strs[i][j])
                    return ans;
            }
            ans += c;
        }

        return ans;
    }
};