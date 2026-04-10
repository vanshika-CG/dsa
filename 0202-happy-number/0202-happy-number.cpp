class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;

        while (n != 1 && !s.count(n)) {
            s.insert(n);
            long long sum = 0;
            while (n) {
                int r = n % 10;
                sum += (r * r);
                n /= 10;
            }
            n = sum;
        }
        return n == 1;
    }
};