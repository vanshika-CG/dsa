class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiagSq = 0; // store diagonal squared (avoid sqrt)
        int maxArea = 0;

        for (int i = 0; i < dimensions.size(); i++) {
            int l = dimensions[i][0];
            int w = dimensions[i][1];
            int diagSq = l * l + w * w; // squared diagonal
            int area = l * w;

            if (diagSq > maxDiagSq || 
            (diagSq == maxDiagSq && area > maxArea)) {
                maxDiagSq = diagSq;
                maxArea = area;
            }
        }
        return maxArea;
    }
};
