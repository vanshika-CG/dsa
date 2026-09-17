class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> m;
        vector<int> ans;

        for (int num : arr1) {
            m[num]++;
        }

        for (int num : arr2) {
            if (m.count(num)) {
                for (int i = 0; i < m[num]; i++) {
                    ans.push_back(num);
                }
                m.erase(num);
            }
        }

        for (auto& p : m) {
            for (int i = 0; i < p.second; i++) {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};