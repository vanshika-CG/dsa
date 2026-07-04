class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> m;
        int j = 0;
        int ans = 0;

        for (int i = 0; i < fruits.size(); i++) {
            m[fruits[i]]++;

            while (m.size() > 2) {
                m[fruits[j]]--;
                if (m[fruits[j]] == 0)
                    m.erase(fruits[j]);
                j++;
            }

            ans = max(ans, i - j + 1);
        }

        return ans;
    }
};