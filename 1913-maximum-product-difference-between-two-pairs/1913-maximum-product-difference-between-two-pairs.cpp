class Solution {
public:
    int partition(vector<int>& nums, int st, int end) {
        int idx = st - 1;
        int pivot = nums[end];

        for (int i = st; i < end; i++) {
            if (nums[i] < pivot) {
                idx++;
                swap(nums[i], nums[idx]);
            }
        }

        idx++;
        swap(nums[end], nums[idx]);

        return idx;
    }

    void QuickSort(vector<int>& nums, int st, int end) {
        if (st >= end)
            return;

        int idx = partition(nums, st, end);

        QuickSort(nums, st, idx - 1);
        QuickSort(nums, idx + 1, end);
    }

    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        QuickSort(nums, 0, n - 1);

        return (nums[n - 1] * nums[n - 2]) - (nums[0] * nums[1]);
    }
};