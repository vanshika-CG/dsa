class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int x : nums) m[x]++;
        for(int y : nums){
            if(m[y]>1) return true;
        }
        return false;
    }
};