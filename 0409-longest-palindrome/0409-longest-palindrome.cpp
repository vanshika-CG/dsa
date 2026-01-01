class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char , int> m;

        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        
        int length = 0;
        bool hasodd = false;

        for(auto &p : m){
            if(p.second % 2 == 0) length += p.second;
            else {
                length += p.second - 1;
                hasodd = true;
            }
        }
        if(hasodd) length += 1;
        return length;
    }
};