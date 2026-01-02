class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string t = "";

        for(int i=0; i<s.size(); i++){
            if(s[i] == '(' && st.empty()){
                st.push(s[i]);
            } else if(!st.empty() && s[i]=='('){
                st.push(s[i]);
                t += s[i];
            } else if(s[i] == ')'){
                st.pop();
                if(!st.empty()) t += s[i]; 
            }
        }
        return t;
    }
};