class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> m;
        int ans = 0;


        for (int i = 0; i < n; i++) {
            int x = k - nums[i];

            if(m[x] > 0){
                ans++;
                m[x]--;
            }else{
                m[nums[i]]++;
            }

        }
        return ans ;
    }
};