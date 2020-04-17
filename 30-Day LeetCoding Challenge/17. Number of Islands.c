void bfs(int x, int y, char** grid, int gridSize, int* gridColSize){
    if(grid[x][y]=='1') grid[x][y]='0';
    else return;
    if(x>0) bfs(x-1,y,grid,gridSize,gridColSize);
    if(y>0) bfs(x,y-1,grid,gridSize,gridColSize);
    if(x<gridSize-1) bfs(x+1,y,grid,gridSize,gridColSize);
    if(y<*gridColSize-1) bfs(x,y+1,grid,gridSize,gridColSize);
}

int numIslands(char** grid, int gridSize, int* gridColSize){
    int cnt=0;
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<*gridColSize;j++){
            if(grid[i][j]=='1'){
                cnt++;
                bfs(i,j,grid,gridSize,gridColSize);
            }
        }
    }
    return cnt;
    free(grid);
    free(gridSize);
    free(*gridColSize);
    free(cnt);
    
}

/*using c++
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) {
            return 0;
        }
        int res = 0, m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '1') {
                    ++res;
                    dfs(grid, i, j, m, n);
                }
            }
        }
        return res;
    }
    
    void dfs(vector<vector<char>>& grid, int r, int c, int& m, int& n) {
        if (r < 0 || c < 0 || r == m || c == n || grid[r][c] == '0') {
            return;
        }
        grid[r][c] = '0';
        dfs(grid, r + 1, c, m, n);
        dfs(grid, r - 1, c, m, n);
        dfs(grid, r, c - 1, m, n);
        dfs(grid, r, c + 1, m, n);
    }
};
*/
