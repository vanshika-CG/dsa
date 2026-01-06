class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count =0;
        int n = nums.size();
        int l =0;
        int r = n-1;

        while(l <= r){
            if(l != r && nums[l] == nums[r]) count++;
            r--;
            if(l==r){
            r = n-1;
            l++;
            } 
        }  

        return count;      
        
    }
};