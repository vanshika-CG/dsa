class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long sum = 0;
        for (long long pen = 0; pen * cost1 <= total; pen++) {
            long long remain = total - pen * cost1;
            sum += remain / cost2 + 1;
        }
        return sum;
    }
};