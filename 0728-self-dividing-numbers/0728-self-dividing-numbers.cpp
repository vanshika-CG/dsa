class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int i = left; i <= right; i++) {
            if (selfDivide(i)) {
                ans.push_back(i);
            };
        }
        return ans;
    }

private:
    bool selfDivide(int n) {
        int num = n;
        while (num != 0) {
            int q = num % 10;
            if (q == 0)
                return false;
            if (n % q != 0)
                return false;
            num /= 10;
        }
        return true;
    }
};