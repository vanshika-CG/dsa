class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            if(nums[i] !=0) nums[index++] = nums[i];
        }
        for(int j = index ; j<n ; j++){
            nums[j] = 0;
        }
    }
};