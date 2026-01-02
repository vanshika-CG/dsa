class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char , int> m;

        for(char c : s) m[c]++;
        
        for(int i=0; i<s.size(); i++){
            char c = s[i];
            if(m[c] == 1) return i;
        }
        return -1;
    }
};