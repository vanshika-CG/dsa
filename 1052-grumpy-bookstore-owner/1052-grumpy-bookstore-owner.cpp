class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans = 0;
        int n = customers.size();

        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0)
                ans += customers[i];
        }

        int st = 0;
        int window = 0;
        int maxi = 0;

        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 1)
                window += customers[i];

            if (i - st + 1 == minutes) {

                maxi = max(maxi, window);

                if (grumpy[st] == 1)
                    window -= customers[st];
                    
                st++;
            }
        }
        return ans + maxi;
    }
};