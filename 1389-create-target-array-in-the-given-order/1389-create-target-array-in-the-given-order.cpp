class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            int j = index[i];
           ans.insert(ans.begin() + j , nums[i]);
        }
        return ans;
    }
};