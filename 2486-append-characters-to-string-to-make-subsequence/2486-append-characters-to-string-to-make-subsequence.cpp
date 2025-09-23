class Solution {
public:
    int appendCharacters(string s, string t) {
        int count =0;
        int i =0;
        int j=0;
        while(i<s.length() && j<t.length()){
            if(t[j]==s[i]){
                i++;
                j++;
                count++;
            }
            else{    
                i++;
            }
        if(count==t.length()) break;
        }
        return t.length()-count;
    }
};