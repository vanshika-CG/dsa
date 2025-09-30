    class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniemail;
        for(string email : emails){
            int pos =  email.find('@');
            string local = email.substr(0, pos);
            string domain = email.substr(pos+1);

            string s = "";
            for(char c : local){
                if(c=='.') continue;
                if(c=='+') break;
                s+=c;
            }
            uniemail.insert(s + "@" + domain);
        }
        return uniemail.size();
    }
};