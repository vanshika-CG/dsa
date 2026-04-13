class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;

        vector<string> ans(numRows);
        bool isdown = false;
        int curr = 0;

        for (char c : s) {
            ans[curr] += c;

            if (curr == 0 || curr == numRows - 1)
                isdown = !isdown;

            if (isdown)
                curr++;
            else
                curr--;
        }

        string res = "";

        for (string t : ans) {
            res += t;
        }
        return res;
    }
};