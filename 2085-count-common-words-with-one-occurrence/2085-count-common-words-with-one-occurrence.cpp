class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string ,int> m1;
        unordered_map<string, int> m2;
        int count =0;

        for(string c1 : words1) m1[c1]++;
        for(string c2 : words2) m2[c2]++;

        for(int i =0; i<words1.size(); i++){
            string s = words1[i];
            if(m1[s] ==1 && m2[s]==m1[s] ) count += m1[s];
            
           
        }
        return count;
    }
};