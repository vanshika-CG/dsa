class Solution {
public:
    int countMonobit(int n) {
        int count = 1, v = 1;

        while (n >= v) {
            count++;
            v = (v << 1) | 1;
        }
        return count;
    }
};