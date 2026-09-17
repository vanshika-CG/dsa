class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans = INT_MIN;
        int idx = -1;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > ans){
                ans = nums[i];
                idx = i;
            }

        }

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] * 2 > ans && i != idx){
                idx = -1;
                break;
            }
        }

        return idx;
    }
};