class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int prev = 0;

        for (auto& el : arr) {
            el = min(el, prev + 1);
            prev = el;
        }
        return arr[n - 1];
    }
};