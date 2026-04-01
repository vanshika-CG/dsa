class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int len = 0, maxlen = 0;

        unordered_map<int, int> m;
        int j = 0;
        for (int i = 0; i < n; i++) {
            m[fruits[i]]++;

            while (m.size() > 2) {
                m[fruits[j]]--;

                if (m[fruits[j]] == 0)
                    m.erase(fruits[j]);

                j++;
            }

            len = i - j + 1;
            maxlen = max(maxlen, len);
        }
        return maxlen;
    }
};