class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int sum = 0;

        for (int num : gain) {
            sum += num;
            ans = max(sum, ans);
        }
        return ans;
    }
};