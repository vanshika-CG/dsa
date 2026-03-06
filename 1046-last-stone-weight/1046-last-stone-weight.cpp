class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;

        for (int s : stones)
            p.push(s);

        while (p.size() > 1) {
            int y = p.top();
            p.pop();
            int x = p.top();
            p.pop();
            if (x != y)
                p.push(y - x);
        }
        return p.empty() ? 0 : p.top();
    }
};