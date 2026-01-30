class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt;
        int pre = 0;
        int great = 0;

        for (int i = 0; i < gain.size(); i++) {
            alt.push_back(pre);
            pre += gain[i];
        }
        alt.push_back(pre);

        for (int num : alt)
            if (great < num)
                great = num;
        return great;
    }
};