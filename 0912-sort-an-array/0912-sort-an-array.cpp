class Solution {
public:
    void merge(int st, int mid, int e, vector<int>& nums) {

        vector<int> temp;
        int i = st, j = mid + 1;

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
            nums[i + st] = temp[i];
        }
    }

    void divide(int s, int e, vector<int>& nums) {

        if (s >= e)
            return;

        int mid = s + (e - s) / 2;

        divide(s, mid, nums);

        divide(mid + 1, e, nums);

        merge(s, mid, e, nums);
    }

    vector<int> sortArray(vector<int>& nums) {

        int s = 0;
        int e = nums.size() - 1;

        divide(s, e, nums);

        return nums;
    }
};