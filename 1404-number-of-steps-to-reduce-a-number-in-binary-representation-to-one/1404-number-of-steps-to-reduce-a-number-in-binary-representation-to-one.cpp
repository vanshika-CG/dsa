class Solution {
public:
    int numSteps(string s) {
        int cnt = 0;

        while (s.size() > 1) {
            if (s.back() == '0') {
                s.pop_back();
            } else {
                addOne(s);
            }
            cnt++;
        }

        return cnt;
    }

private:
    void addOne(string& s) {
        int carry = 1;
        int i = s.size() - 1;

        while (i >= 0 && carry) {
            if (s[i] == '1') {
                s[i] = '0';
            } else {
                s[i] = '1';
                carry = 0;
            }
            i--;
        }

        if (carry) {
            s = "1" + s;
        }
    }
};