class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int , int> m;
        int maxi = -1;
        int tar = 0;
        int n = nums.size();

        for(int i =0 ; i < n ; i++) m[nums[i]] = i;

        for(int i =0; i < n ; i++){
            if(nums[i] < 0){
                 tar = 0 - nums[i];
            }else{
                 tar = 0 - nums[i];
            }

            if(m.find(tar) != m.end()) maxi = max(abs(tar) , maxi);
        }
        return maxi;
    }
};