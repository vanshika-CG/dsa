class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int k = t.size();
        if (k != n)
            return false;

        unordered_map<char, int> m;

        for (char c : s)
            m[c]++;
        for (char c : t)
            m[c]--;

        for (char c : s) {
            if (m[c])
                return false;
        }
        return true;
    }
};