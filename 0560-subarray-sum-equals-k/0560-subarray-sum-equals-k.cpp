class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> seen;
        seen[0] = 1;   // prefix sum = 0 seen once

        int sum =0;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
        sum += nums[i];
        if(seen.find(sum - k) != seen.end()) count += seen[sum - k];
        seen[sum]++;
        }
        return count;
    }
};