class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int score = 0;
        int maxscore = 0;
        int n = tokens.size();

        int l = 0, r = n - 1;

        while (l <= r) {
            if (tokens[l] <= power) {
                power -= tokens[l];
                score++;
                maxscore = max(score, maxscore);
                l++;
            } else if (score >= 1) {
                power += tokens[r];
                score -= 1;
                r--;
            } else
                break;
        }
        return maxscore;
    }
};