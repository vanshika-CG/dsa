class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> m;
        int ans = 0;

        // store freq in map
        for (int num : nums)
            m[num]++;

        for (int num : nums) {
            // for preventing infinite loop 
            if (num == 1)
                continue;

            int s = 0;
            long long curr = num;
            while (m.count(curr)) {
                // if count is more than 2 , size will be add 2 as it should be incr nd decr 
                if (m[curr] >= 2) {
                    s += 2;
                    curr *= curr; // finding square in array
                } else {
                    s++;
                    break;
                }
            }
            ans = max(ans, s);
        }

        if (ans % 2 == 0)
             ans--; // as len always be odd as peak element should be once 

        return max(ans, (m[1] % 2) ? m[1] : m[1] - 1);
    }
};