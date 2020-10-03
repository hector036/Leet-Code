class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int peri = 0;
        for(int i = 0; i< grid[0].size();i++){
            int ok = 1;
            for(int j = 0;j<grid.size();j++){
                if(grid[j][i]==1){
                    if(ok) peri += 2;
                    ok = 0;
                }else ok = 1;
            }
        }
        for(int i = 0; i< grid.size();i++){
            int ok = 1;
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    if(ok) peri += 2;
                    ok = 0;
                }else ok = 1;
            }
        }
        return peri;
    }
};