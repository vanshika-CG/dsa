class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1)
            return s;

        int n = s.size();
        vector<string> ans(numRows);
        bool isdown = false;
        int i = 0;
        int r = 0;

        while (i < n) {
            ans[r] += s[i];
            if (r == 0 || r == numRows - 1)
                isdown = !isdown;

            if (isdown) {
                r++;
            } else
                r--;
            i++;
        }

        string t = "";

        for (string c : ans)
            t += c;

        return t;
    }
};