class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int sum = 0;

        while (i < j) {
            if (height[i] >= height[j]) {
                sum = max((j - i) * height[j], sum);
                j--;
            } else {
                sum = max((j - i) * height[i], sum);
                i++;
            }
        }
        return sum;
    }
};