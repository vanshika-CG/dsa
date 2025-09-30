class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        int u =nums[0];
        if(n==1) return u; 
        for(int i=0; i<n-1 ; i++){
             count =1;
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j]){ 
                count++;
                 u = nums[i];
                }
                if(count>n/2) return u;
            }
        }
       return u;
    }
};