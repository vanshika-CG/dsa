class Solution {
public:
    int scoreOfString(string s) {
        int sum =0;
        for(int i=0 ;i<s.length()-1;i++){
            int diff = abs(s[i+1]-s[i]);
            sum += diff;
        }
        return sum;
    }
};