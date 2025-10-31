class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0;
        int current = 1;
        while(k >= 0){
            if(i < arr.size() && arr[i]==current) current++;
            else k--;
            current ++;
        }
        return current;
    }
};