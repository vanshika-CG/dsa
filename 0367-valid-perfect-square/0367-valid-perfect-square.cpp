class Solution {
public:
    bool isPerfectSquare(int num) {
        long long right = num , left = 1;

        while(left <= right){

            long long mid = left + (right - left) / 2;
            long long sq = mid * mid;

            if(num == sq) return true;
            else if(sq < num) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
};