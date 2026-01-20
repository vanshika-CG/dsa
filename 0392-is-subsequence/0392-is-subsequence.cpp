class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0 , j = 0;
        int n = s.size() , m = t.size();
        if(n == 0) return true;
        while(i < n && j < m){
            if(s[i] == t[j]){
                i++;
                j++;
                if(i == n)return true;
            }
             
            else j++;
        }
        return false;
    }
};