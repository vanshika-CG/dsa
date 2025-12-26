class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0;
        int l =0 , r =0 , count =0;

        while(r < nums.size()){
            if(nums[r] == 0) count++;
            while(count > k){
                if(nums[l] == 0) count--;
                l++;
            }

            if(count <= k){
                int len = r - l + 1;
                maxlen = max(maxlen , len);
            }
            r++;
        }
        return maxlen;
    }
};