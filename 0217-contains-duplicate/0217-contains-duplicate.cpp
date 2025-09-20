class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0 ;i<nums.size();i++){
            int first = nums[i];
            if(m.find(first)!= m.end()){
                return true;
                break;
            }
           m[first++];
        }
         return false;
    }
};