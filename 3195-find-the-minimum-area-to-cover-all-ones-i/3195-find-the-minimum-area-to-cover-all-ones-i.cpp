class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size(); 
        int m = grid[0].size(); 
        
        int minrow = n , maxrow = -1;
        int mincol = m , maxcol = -1;

        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]==1){
                    if(minrow > i) minrow =i;
                    if(maxrow < i) maxrow =i;
                    if(mincol > j) mincol =j;
                    if(maxcol < j) maxcol =j;
                }
            }
        }

        int height = maxrow - minrow +1;
        int width = maxcol - mincol +1;
        return height*width;

    }
};