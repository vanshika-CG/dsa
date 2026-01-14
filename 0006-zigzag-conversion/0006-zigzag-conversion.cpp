class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> ans(numRows);
        bool isdown = false;
        int currow = 0;

        for (char c : s) {
            ans[currow] += c;

            if (currow == 0 || currow == numRows - 1)
                isdown = !isdown;

            if (isdown)
                currow += 1;
            else
                currow += -1;
        }

        string result;
        for (string row : ans) {
            result += row;
        }
        return result;
    }
};