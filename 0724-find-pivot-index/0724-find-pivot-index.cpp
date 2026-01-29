class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int suf = 0 ;

        for(int num : nums) suf += num;

        int pre = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            suf -= nums[i];
            if(pre == suf) return i;
            pre += nums[i];
        }
        return -1;
    }
};