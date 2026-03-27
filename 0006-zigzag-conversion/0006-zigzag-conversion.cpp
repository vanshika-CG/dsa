class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows > s.size() || numRows == 1)
            return s;

        vector<string> ans(numRows);
        int curr = 0;
        bool isdown = false;

        for (char c : s) {
            ans[curr] += c;

            if (curr == 0 || curr == numRows - 1)
                isdown = !isdown;

            if (isdown)
                curr += 1;
            else
                curr -= 1;
        }

        string res = "";

        for (string r : ans) {
            res += r;
        }

        return res;
    }
};