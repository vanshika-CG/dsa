class Solution {
public:
    int minimumSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<pair<int,int>> ones;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (grid[i][j]==1) ones.push_back({i,j});
            }
        }
        
        auto bbox_area = [&](vector<pair<int,int>>& pts)->int {
            if (pts.empty()) return 0;
            int rmin=1e9, rmax=-1e9, cmin=1e9, cmax=-1e9;
            for (auto &[r,c]: pts) {
                rmin = min(rmin,r);
                rmax = max(rmax,r);
                cmin = min(cmin,c);
                cmax = max(cmax,c);
            }
            return (rmax-rmin+1)*(cmax-cmin+1);
        };
        
        int ans = INT_MAX;

        // Case 1: Vertical 3 splits
        for (int c1=0;c1<m;c1++){
            for (int c2=c1+1;c2<m;c2++){
                vector<pair<int,int>> g1,g2,g3;
                for (auto &[r,c]: ones){
                    if (c<=c1) g1.push_back({r,c});
                    else if (c<=c2) g2.push_back({r,c});
                    else g3.push_back({r,c});
                }
                if (g1.empty()||g2.empty()||g3.empty()) continue;
                ans = min(ans, bbox_area(g1)+bbox_area(g2)+bbox_area(g3));
            }
        }

        // Case 2: Horizontal 3 splits
        for (int r1=0;r1<n;r1++){
            for (int r2=r1+1;r2<n;r2++){
                vector<pair<int,int>> g1,g2,g3;
                for (auto &[r,c]: ones){
                    if (r<=r1) g1.push_back({r,c});
                    else if (r<=r2) g2.push_back({r,c});
                    else g3.push_back({r,c});
                }
                if (g1.empty()||g2.empty()||g3.empty()) continue;
                ans = min(ans, bbox_area(g1)+bbox_area(g2)+bbox_area(g3));
            }
        }

        // Case 3: 2 vertical + 1 horizontal
        for (int c=0;c<m-1;c++){
            for (int r=0;r<n-1;r++){
                vector<pair<int,int>> g1,g2,g3;
                for (auto &[x,y]: ones){
                    if (y<=c && x<=r) g1.push_back({x,y});
                    else if (y<=c) g2.push_back({x,y});
                    else g3.push_back({x,y});
                }
                if (g1.empty()||g2.empty()||g3.empty()) continue;
                ans = min(ans, bbox_area(g1)+bbox_area(g2)+bbox_area(g3));

                g1.clear(); g2.clear(); g3.clear();
                for (auto &[x,y]: ones){
                    if (y>c && x<=r) g1.push_back({x,y});
                    else if (y>c) g2.push_back({x,y});
                    else g3.push_back({x,y});
                }
                if (g1.empty()||g2.empty()||g3.empty()) continue;
                ans = min(ans, bbox_area(g1)+bbox_area(g2)+bbox_area(g3));
            }
        }

        // Case 4: 2 horizontal + 1 vertical
        for (int r=0;r<n-1;r++){
            for (int c=0;c<m-1;c++){
                vector<pair<int,int>> g1,g2,g3;
                for (auto &[x,y]: ones){
                    if (x<=r && y<=c) g1.push_back({x,y});
                    else if (x<=r) g2.push_back({x,y});
                    else g3.push_back({x,y});
                }
                if (g1.empty()||g2.empty()||g3.empty()) continue;
                ans = min(ans, bbox_area(g1)+bbox_area(g2)+bbox_area(g3));

                g1.clear(); g2.clear(); g3.clear();
                for (auto &[x,y]: ones){
                    if (x>r && y<=c) g1.push_back({x,y});
                    else if (x>r) g2.push_back({x,y});
                    else g3.push_back({x,y});
                }
                if (g1.empty()||g2.empty()||g3.empty()) continue;
                ans = min(ans, bbox_area(g1)+bbox_area(g2)+bbox_area(g3));
            }
        }

        return ans;
    }
};
