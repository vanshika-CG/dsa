class Solution {
public:
    int minOperations(string s) {
        int ans1 = 0, ans2 = 0;
        char c1 = '0', c2 = '1';

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != c1)
                ans1++;
            if (s[i] != c2)
                ans2++;

            char c = c1;
            c1 = c2;
            c2 = c;
        }
        return min(ans1, ans2);
    }
};