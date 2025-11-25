class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int> m;
        for(char c : s) m[c]++;
        for(char c : t) m[c]--;
        for(auto p : m){
            if(p.second != 0) return false;
        }
        return true;
    }
};