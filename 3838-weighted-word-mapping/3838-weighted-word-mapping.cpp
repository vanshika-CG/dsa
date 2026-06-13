class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

        for (string w : words) {
            int sum = 0;
            for (char c : w) {
                int idx = c - 'a';
                sum += weights[idx];
            }
            sum = sum % 26;
            ans += (25 - sum) + 'a';
        }
        return ans;
    }
};