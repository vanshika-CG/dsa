class Solution {
public:
    string largestGoodInteger(string num) {
        int ans = INT_MIN;
        string s = "";
        for (int i = 1; i < num.size() - 1; i++) {
            if (num[i - 1] == num[i] && num[i] == num[i + 1]) {
                ans = max(ans, num[i] - '0');
            }
        }
        if (ans == INT_MIN)
            return "";
        else {
            s = to_string(ans);
            s = s + s + s;
        }
        return s;
    }
};