class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size(); 
        int m = mat[0].size();

        int l = 0 , r = m - 1;

        while(l <= r){
            int mid = l + (r - l) / 2;
            
            int maxrow = 0;
            for(int i = 0 ; i < n ; i++){
                if(mat[i][mid] > mat[maxrow][mid]) maxrow = i;
            }

            int left = (mid > 0) ? mat[maxrow][mid - 1] : -1 ;
            int right = (mid < m -1) ? mat[maxrow][mid + 1] : -1 ;

            if(mat[maxrow][mid] > left && mat[maxrow][mid] > right) return {maxrow , mid};
            else if(mat[maxrow][mid] < right) l = mid + 1;
            else r = mid - 1;
        }
        return {-1 , -1};
    }
};