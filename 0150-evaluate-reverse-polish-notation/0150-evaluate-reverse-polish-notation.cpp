class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int a = st.top();
                st.pop();

                int b = st.top();
                st.pop();

                int ans = operate(b, a, s);
                st.push(ans);
            } else {
                st.push(stoi(s));
            }
        }
        return st.top();
    }

private:
    int operate(int a, int b, string s) {
        if (s == "+")
            return a + b;
        if (s == "-")
            return a - b;
        if (s == "/")
            return a / b;
        if (s == "*")
            return a * b;
        return 0;
    }
};