class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;

        for (auto& s : patterns) {
            if (substr(s, word))
                ans++;
        }
        return ans;
    }

private:
    bool substr(string s, string w) {
        int n = s.size();
        int m = w.size();

        for (int i = 0; i <= m - n; i++) {
            int j = 0;
            while (j < n && w[i + j] == s[j])
                j++;
            if (j == n)
                return true;
        }
        return false;
    }
};