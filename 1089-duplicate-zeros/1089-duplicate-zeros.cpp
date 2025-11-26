class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (ans.size() == n)
                break;
            if (arr[i] == 0) {
                ans.push_back(arr[i]);
                if (ans.size() == n)
                    break;

                ans.push_back(arr[i]);
            } else
                ans.push_back(arr[i]);
        }
        arr = ans;
    }
};