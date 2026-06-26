class Solution {
public:
    set<vector<int>> s;

    void combin(vector<int>& arr, int tar , int i , vector<vector<int>> &ans ,  vector<int> &comb){
        int n = arr.size();
        if(tar < 0) return;

        if(i == n){
            if(tar == 0 && !s.count(comb)){
            ans.push_back(comb);
            s.insert(comb);
            }
            return;
        }

        comb.push_back(arr[i]);

        // single 
        combin(arr , tar - arr[i] , i + 1 , ans , comb);

        // multiple
        combin(arr , tar - arr[i] , i , ans , comb);  

        comb.pop_back();

        // exclude
        combin(arr , tar , i + 1 , ans , comb);     

    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> comb;

        // recursion
        combin(arr , target , 0 , ans , comb);

        return ans;

    }
};