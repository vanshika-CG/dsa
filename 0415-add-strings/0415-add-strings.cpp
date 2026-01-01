class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        int carry =0;
        int i = n-1 , j=m-1;
        string ans;
        
        while(i>=0 || j>=0 || carry){
           int sum = carry;

           if(i>=0) sum += num1[i] - '0';
           if(j>=0) sum += num2[j] - '0';
           ans.push_back((sum % 10) + '0');
           carry = sum/10;
           i--;
           j--;
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};