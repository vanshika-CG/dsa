class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            int first = target - nums[i];

            if (m.find(first) != m.end()) {
                return {m[first], i};
            }
            m[nums[i]] = i;
        }
        return {-1, -1};
    }
};