class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {

        int totalsum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int curr = nums[i];
            int count = 0;
            int sum = 0;

            for (int j = 1; j <= curr; j++) {
                if (curr % j == 0) {
                    count++;
                    sum += j;
                }
                if (count > 4)
                    break;
            }
            if (count == 4)
                totalsum += sum;
        }
        return totalsum;
    }
};