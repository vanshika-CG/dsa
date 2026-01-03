class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;

        for (string c : ops) {
            if (c == "C")
                st.pop();
            else if (c == "D")
                st.push(2 * st.top());
            else if (c == "+") {
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.push(top1);
                st.push(top1 + top2);
            } else {
                st.push(stoi(c));
            }
        }

        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};