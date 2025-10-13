class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        map<int,int> m;
        int sum =0;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]] ++;
        }
        for(int i=0; i<nums.size(); i++){
           if(m[nums[i]] % k==0) sum += nums[i];
        }
        return sum;
    }
};