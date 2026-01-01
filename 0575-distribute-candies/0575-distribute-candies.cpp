class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int count = 1;

        for (int i = 0; i < n - 1; i++) {
            if (candyType[i] != candyType[i + 1])
                count++;
        }
        if (count > n / 2)
            return n / 2;
        else
            return count;
    }
};