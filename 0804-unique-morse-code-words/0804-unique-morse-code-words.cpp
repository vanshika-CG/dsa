class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char, string> m;
        unordered_map<string , int> ans;
        vector<string> ch = {".-",   "-...", "-.-.", "-..",  ".",    "..-.",
                           "--.",  "....", "..",   ".---", "-.-",  ".-..",
                           "--",   "-.",   "---",  ".--.", "--.-", ".-.",
                           "...",  "-",    "..-",  "...-", ".--",  "-..-",
                           "-.--", "--.."};

        for(int i=0; i<ch.size(); i++){
            m['a' + i] = ch[i];
        }

        for(int i=0; i<words.size() ; i++){
            string pattern = "";
            for(char c : words[i]){
                pattern += m[c];
            }

            ans[pattern]++;
        }

        return ans.size();
    }
};