class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin() , nums.end());
        int r = nums.size() - 1;

        for(int i = r ; i >= 2 ; i--){
            if(nums[i] < nums[i-1] + nums[i-2]){
                ans = max(nums[i] + nums[i-1] + nums[i-2] , ans);
            }
        }
        return ans;
    }
};