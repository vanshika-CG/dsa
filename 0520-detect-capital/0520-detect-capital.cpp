class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        int ct = 0;

        for (char c : word) {
            if (isupper(c))
                ct++;
        }

        if (ct == n ||ct == 0)
            return true;
        if(ct == 1 && isupper(word[0])) return true;
        return false;
    }
};