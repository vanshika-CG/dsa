class Solution {
public:
    void merge(int s, int mid, int e, vector<int>& nums, int& ans) {
        vector<int> temp;
        int j = mid + 1;

        for (int i = s; i <= mid; i++) {
            while (j <= e && nums[i] > 2LL * nums[j])
                j++;

            ans += j - (mid + 1);
        }

        int i = s;
        j = mid + 1;

        while (i <= mid && j <= e) {

            if (nums[i] > nums[j]) {
                temp.push_back(nums[j]);
                j++;
            } else {
                temp.push_back(nums[i]);
                i++;
            }
        }

        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        while (j <= e) {
            temp.push_back(nums[j]);
            j++;
        }

        for (int i = 0; i < temp.size(); i++) {
            nums[i + s] = temp[i];
        }
    }

    void divide(int s, int e, vector<int>& nums, int& ans) {
        if (s >= e)
            return;

        int mid = s + (e - s) / 2;

        divide(s, mid, nums, ans);

        divide(mid + 1, e, nums, ans);

        merge(s, mid, e, nums, ans);
    }

    int reversePairs(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;
        int ans = 0;

        divide(s, e, nums, ans);

        return ans;
    }
};