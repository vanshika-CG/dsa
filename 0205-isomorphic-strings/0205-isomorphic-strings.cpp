class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> ms;
        unordered_map<char, char> mt;

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