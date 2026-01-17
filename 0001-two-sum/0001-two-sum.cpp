class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int>res;
        
        for(int i=0; i<nums.size();i++){
            int sec = target - nums[i];
            if(m.find(sec)!= m.end()){
                res.push_back(i);
                res.push_back(m[sec]);
            }
            m[nums[i]] = i;
        }
        return res;
    }
};