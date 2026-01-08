class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> m;

        for (int n : nums)
            m[n]++;

        for (int num : nums) {
            if (m[num] % 2 != 0)
                return false;
        }
        return true;
    }
};