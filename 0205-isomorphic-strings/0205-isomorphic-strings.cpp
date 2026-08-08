class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> ms;
        unordered_map<char, int> mt;

        for (int i = 0; i < s.size(); i++) {

            if (ms[s[i]] && ms[s[i]] != t[i])
                return false;
            if (mt[t[i]] && mt[t[i]] != s[i])
                return false;

            ms[s[i]] = t[i];
            mt[t[i]] = s[i];
        }
        return true;
    }
};