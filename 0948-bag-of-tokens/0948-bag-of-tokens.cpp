class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int score = 0;
        int maxscore = 0;
        int l = 0, r = tokens.size() - 1;

        while (l <= r) {
            if (tokens[l] <= power) {
                score++;
                maxscore = max(maxscore, score);
                power -= tokens[l];
                l++;
            } else if (score > 0) {
                score--;
                power += tokens[r];
                r--;
            } else
                break;
        }
        return maxscore;
    }
};