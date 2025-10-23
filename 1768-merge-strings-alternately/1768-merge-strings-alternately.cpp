class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int n = word1.size();
        int m = word2.size();
        int i=0; 
        while(i < n || i < m){
            if(i<n) s += word1[i];
            if(i<m) s+=word2[i];
            i++;
        }
       return s;
    }
};