class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev;
        if(num==0) return true;
        while(num!=0){
            rev = num % 10;
            if(rev == 0){
                return false;
            }
            else{
                break;
            }
            num = num/10;
        }
        return true;
    }
};