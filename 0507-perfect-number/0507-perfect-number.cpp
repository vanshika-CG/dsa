class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        int n ;
        for(int i=1 ; i<num; i++){
            if(num % i ==0){  
            n = i;
            sum+=n;
            }
        }      
        return sum==num;
    }
};