class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        int n = p.size();

        for (char c : p)
            freq1[c - 'a']++;

        for (int i = 0; i < s.size(); i++) {
            freq2[s[i] - 'a']++;

            if (i >= n)
                freq2[s[i - n] - 'a']--;

            if (freq1 == freq2) {
                ans.push_back(i - n + 1);
            }
        }
        return ans;
    }
};