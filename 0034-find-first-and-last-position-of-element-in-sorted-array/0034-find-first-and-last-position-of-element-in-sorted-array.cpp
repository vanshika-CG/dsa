class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = search(nums, target, true);
        int r = search(nums, target, false);

        return {l, r};
    }

    int search(vector<int>& nums, int target, bool isleft) {
        int ans = -1;
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (nums[mid] > target)
                r = mid - 1;
            else if (nums[mid] < target)
                l = mid + 1;
            else {
                if (isleft) {
                    ans = mid;
                    r = mid - 1;
                } else {
                    ans = mid;
                    l = mid + 1;
                }
            }
        }
        return ans;
    }
};