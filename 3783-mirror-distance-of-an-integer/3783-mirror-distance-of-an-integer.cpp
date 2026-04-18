class Solution {
public:
    int mirrorDistance(int n) {
        return abs(n - reverse(n));
    }

private :
    int reverse(int n){
        int num = 0;

        while(n){
            int r = n % 10;
            num = (num * 10) + r ;
            n /= 10;
        }
        return num;
    }
};