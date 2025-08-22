class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        if(n==2) return true;
        int diffx = coordinates[1][0]-coordinates[0][0];
        int diffy = coordinates[1][1]-coordinates[0][1];

        for(int i =0; i<coordinates.size() ; i++){
               int x = coordinates[i][0] - coordinates[0][0];
            int y = coordinates[i][1] - coordinates[0][1];
            if(diffy* x != diffx * y) return false;
        
        }
        return true;
    }
};