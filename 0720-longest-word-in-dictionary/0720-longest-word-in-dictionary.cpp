class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end());
        unordered_set<string> s;
        string ans = "";

        for (string word : words) {
            if (word.size() == 1 || s.count(word.substr(0, word.size() - 1))) {
                s.insert(word);
                if (word.size() > ans.size())
                    ans = word;
            }
        }
        return ans;
    }
};