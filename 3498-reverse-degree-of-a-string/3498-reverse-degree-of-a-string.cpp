class Solution {
public:
    int reverseDegree(string s) {
        map<char , int> m;

        char c = 'a';
        for(int i = 26 ; i>0 ; i--){
            m[c] = i;
            c++;
        }

        int sum = 0;

        for(int i=0 ; i<s.size(); i++){
            char c = s[i];
            sum +=  (i + 1) * m[c]; 
        }
        return sum;
    }
};