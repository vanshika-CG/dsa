class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> seen;

        for(int num : arr){
            m[num]++;
        }

        for(auto &p : m){
            if(!seen.insert(p.second).second){
                return false;
            }
        }
        return true;
    }
};