class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n - 1;
        int area = 0;

        while (l < r) {
            if (height[l] > height[r]) {
                area = max(area, (height[r] * (r - l)));
                r--;
            } else {
                area = max(area, (height[l] * (r - l)));
                l++;
            }
        }
        return area;
    }
};