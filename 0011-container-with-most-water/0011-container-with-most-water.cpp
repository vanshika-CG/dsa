class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int sum = 0;

        while (l < r) {
            if (height[l] > height[r]) {
                sum = max(sum, (height[r]) * (r - l));
                r--;
            } else {
                sum = max(sum, (height[l]) * (r - l));
                l++;
            }
        }
        return sum;
    }
};