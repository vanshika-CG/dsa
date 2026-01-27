class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for (int i = 2; i <= num; i++) {
            if (sum(i))
                count++;
        }
        return count;
    }

private:
    bool sum(int num) {
        int sum = 0;

        while (num) {
            int q = num % 10;
            sum += q;
            num /= 10;
        }

        if (sum % 2 == 0)
            return true;
        return false;
    }
};