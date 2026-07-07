class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;

        for (char c : t)
            need[c]++;

        unordered_map<char, int> wind;
        int req = need.size();
        int form = 0;
        int start = 0;
        int ans = INT_MAX;
        int j = 0;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            wind[c]++;

            if (wind[c] == need[c])
                form++;

            while (form == req) {
                if (ans > (i - j + 1)) {
                    ans = i - j + 1;
                    start = j;
                }

                char ch = s[j];
                wind[ch]--;
                j++;

                if (need[ch] && wind[ch] < need[ch])
                    form--;
            }
        }

        if (ans == INT_MAX)
            return "";

        return s.substr(start, ans);
    }
};