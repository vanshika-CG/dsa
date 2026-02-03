class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n <= 3) return false;
        int p = 0;
        int q = 0;

        if(nums[0] > nums[1]) return false;
        
        for(int i = 1 ; i <nums.size() -1; i++){
            if(nums[i] > nums[i - 1] && nums[i] > nums[i+1]){
                if(p != 0) return false;
                 p = i;
            } 
             if(nums[i] < nums[i-1] && nums[i] < nums[i+1] && p != 0 && q == 0){
                 if(q != 0) return false;
                q = i;
            } 
             if(nums[i] == nums[i+1] || nums[i] == nums[i-1]) return false;
        }
         
        if(p >= q) return false;

        while(p < q){
            if(nums[p] > nums[q]) q--;
            else return false;
        }
        return true;
    }
};