class Solution {
public:
    bool isPowerOfThree(int n) {
        n /= 3;
        while(n == 1){
            n /= 3;
        }
    }
};