class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp = s + s;
        int n = s.size();

        if(n != goal.size()) return false;

        for (int i = 0; i < 2 * n; i++) {
            if (temp.substr(i, n) == goal)
                return true;
        }
        return false;
    }
};