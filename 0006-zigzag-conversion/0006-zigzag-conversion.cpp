class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows == 1) return s;
        
        int n = s.size();
        int m = 0;
        vector<string> ans(numRows);

        bool isdown = false;

        for (int i = 0; i < n; i++) {
            ans[m] += s[i];

            if (m == numRows - 1 || m == 0)
                isdown = !isdown;

            if (isdown)
                m++;
            else
                m--;
        }

        string res = "";

        for (string t : ans)
            res += t;

        return res;
    }
};