class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> h;

        for (int x : stones)
            h.push(x);

        while (h.size() > 1) {
            int t = h.top();
            h.pop();

            if (h.top() != t) {
                t = t - h.top();
                h.pop();
                h.push(t);
            } else {
                h.pop();
            }
        }
        if (h.empty())
            return 0;
        return h.top();
    }
};