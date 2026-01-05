class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int num : nums) {
            if (countDigit(num) % 2 == 0)
                count++;
        }
        return count;
    }

private:
    int countDigit(int n) {
        int count = 0;
        while (n != 0) {
            count++;
            n /= 10;
        }
        return count;
    }
};