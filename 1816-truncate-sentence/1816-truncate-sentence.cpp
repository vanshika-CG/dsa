class Solution {
public:
    string truncateSentence(string s, int k) {
        string t = "";
        for(int i=0; i<s.size(); i++){
            if(s[i]== ' '){
             k--;
             if(k==0) break;
            }

            t += s[i];
        }
        return t;
    }
};