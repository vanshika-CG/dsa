class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> ans;

        vector<int> t(26, 0);
        vector<int> q(26, 0);

        for (char c : p)
            t[c - 'a']++;

        for (int i = 0; i < n; i++) {
            q[s[i] - 'a']++;

            if (i >= m)
                q[s[i - m] - 'a']--;

            if (t == q)
                ans.push_back(i - m + 1);
                
        }
        return ans;
    }
};