class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        vector<int> ans;

        for (int num : nums)
            s.insert(num);

        for (int i = 1; i <= n; i++) {
            if (!s.count(i))
                ans.push_back(i);
        }
        return ans;
    }
};