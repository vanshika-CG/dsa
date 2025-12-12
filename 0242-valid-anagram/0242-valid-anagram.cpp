class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.size() != s.size()) return false;
        unordered_map<int,int> m;
        for(char x : s) m[x]++;
        for(char x : t) m[x]--;
        for(auto& p :m){
            if(p.second != 0) return false;
        }
        return true;
    }
};