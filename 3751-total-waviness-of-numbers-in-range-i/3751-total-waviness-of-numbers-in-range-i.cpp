class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;

        for (int x = num1; x <= num2; x++) {
            ans += wave(x);
        }
        return ans;
    }

private:
    int wave(int x) {
        string s = to_string(x);
        int n = s.size();
        if (n < 3)
            return 0;

        int c = 0;

        for (int i = 1; i < n - 1; i++) {
            if (s[i] > s[i - 1] && s[i] > s[i + 1] ||
                (s[i] < s[i - 1] && s[i] < s[i + 1]))
                c++;
        }
        return c;
    }
};