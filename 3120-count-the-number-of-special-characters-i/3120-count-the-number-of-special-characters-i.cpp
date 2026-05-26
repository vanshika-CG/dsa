class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        for (int s : word) {
            if (islower(s))
                lower[s - 'a'] = 1;
            else
                upper[s - 'A'] = 1;
        }

        int count = 0;

        for (int i = 0; i < 26; i++) {
            if (lower[i] && upper[i])
                count++;
        }
        return count;
    }
};