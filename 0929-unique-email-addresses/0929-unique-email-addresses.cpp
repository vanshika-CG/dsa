    class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniemail;
        for(string email : emails){
            int pos =  email.find('@');
            string s = "";
            for(int i=0; i<pos ; i++){
                if(email[i]=='.') continue;
                if(email[i]=='+') break;
                s+=email[i];
            }
            uniemail.insert(s + email.substr(pos));
        }
        return uniemail.size();
    }
};