class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string t = "";

        for (string w : dictionary) {
            if (subsequence(s, w)) {
                if (w.size() > t.size() || (w.size() == t.size() && w < t))
                    t = w;
            }
        }
        return t;
    }

private:
    bool subsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j])
                j++;
            i++;
        }
        return j == t.size();
    }
};