class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> freq1(26 , 0);
        vector<int> freq2(26 , 0);
        int j = 0;

        vector<int> ans;

        for(char c : p) freq2[c - 'a']++;

        for(int i = 0 ; i < n ; i++){
            freq1[s[i] - 'a']++;

            while(i - j + 1 > m){
                freq1[s[j] - 'a']--;
                j++;
            }

            if(freq1 == freq2) ans.push_back( i - m + 1);
        }
    return ans;
    }
};