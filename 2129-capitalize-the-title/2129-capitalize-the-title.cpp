class Solution {
public:
    string capitalizeTitle(string title) {
        string ans = "";
        string w = "";
        int n = title.size();

        for (int i = 0; i <= n; i++) {
            if (title[i] == ' ' || i == n) {

                if (w.size() == 1 || w.size() == 2) {
                    for (char& c : w)
                        c = tolower(c);
                } else {
                    for (char& c : w)
                        c = tolower(c);
                    w[0] = toupper(w[0]);
                }
                ans += w;

                if (i != n)
                    ans += ' ';

                w = "";
            } else
                w += title[i];
        }

        return ans;
    }
};