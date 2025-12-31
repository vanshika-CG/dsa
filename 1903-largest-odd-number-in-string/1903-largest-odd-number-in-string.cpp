class Solution {
public:
    string largestOddNumber(string num) {
        string s = "";
        int n = num.size();
         if(num[n-1] % 2 != 0) return num;
        for(int i= 0; i < n; i++){
           if(num[i] % 2 != 0) s+=num[i];
        }
        return s;
    }
};