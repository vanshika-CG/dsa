class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int c = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'L') c += 1;
            else c -= 1;
            if(c == 0) ans += 1;
        }
        return ans;
    }
};