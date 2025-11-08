class Solution {
public:
    int climbStairs(int n) {
        int a =1;
        int b=1;
        for(int i=2;i<=n;i++){
            int count =a+b;
            b=a;
            a=count;
        }
        return a;
    }
};