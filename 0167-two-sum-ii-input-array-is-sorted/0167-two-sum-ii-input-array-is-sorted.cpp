class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> m;
        int l = 0, r = numbers.size() - 1;

        for (int i = 0; i < numbers.size(); i++) {
            int sec = target - numbers[i];

            if (m.find(sec) != m.end())
                return {m[sec] + 1, i + 1};

            m[numbers[i]] = i;
        }
        return {};
    }
};