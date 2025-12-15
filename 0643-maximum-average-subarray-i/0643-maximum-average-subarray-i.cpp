class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxsum = INT_MIN;
        int currsum = 0;

        for(int i=0; i<k; i++){
            currsum += nums[i];
        }
        maxsum = currsum;
        for(int j=k ; j<nums.size(); j++){
            currsum += nums[j];
            currsum -= nums[j-k];
            maxsum = max(maxsum , currsum);
        }
        return (double) maxsum/k;
    }
};