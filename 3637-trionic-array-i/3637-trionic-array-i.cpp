class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n <= 3)
            return false;
        int i = 0;

        while (i + 1 < n && nums[i] < nums[i + 1])
            i++;

        if (i == 0)
            return false;

        int peak = i;

        while (i + 1 < n && nums[i] > nums[i + 1])
            i++;

        if (peak == i)
            return false;

        int down = i;

        while (i + 1 < n && nums[i] < nums[i + 1])
            i++;

        if (i == down)
            return false;

        return i == n - 1;
    }
};