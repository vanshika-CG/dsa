class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> m;

        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sec = k - nums[i];

            if (m[sec] > 0) {
                count++;
                m[sec]--;
            } else
                m[nums[i]]++;
        }
        return count;
    }
};