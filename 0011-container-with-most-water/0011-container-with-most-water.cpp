class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxsum = 0;
        int n = height.size();
        int i = 0, j = n - 1;
        int area = 0;

        while (i < j) {
            if (height[i] <= height[j]) {
                area = (j - i) * height[i];
                i++;
            } else {
                area = (j - i) * height[j];
                j--;
            }
            maxsum = max(maxsum, area);
        }
        return maxsum;
    }
};