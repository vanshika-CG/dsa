class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0) return false;

        for(int num : {2,3,5}){
            while(n % num == 0){
                n /= num;
            }
        }
        return n == 1;
    }
};