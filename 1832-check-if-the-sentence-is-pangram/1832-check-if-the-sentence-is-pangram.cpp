class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> ans(26, false);

        if (sentence.size() < 26)
            return false;

        for (char c : sentence) {
            ans[c - 'a'] = true;
        }

        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == false)
                return false;
        }
        return true;
    }
};