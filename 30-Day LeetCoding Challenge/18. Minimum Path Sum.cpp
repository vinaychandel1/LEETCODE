class Solution {
public:

    int minPathSum(vector<vector<int>>& grid) {
	
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(i==0 && j==0) continue;
                if(i==0) grid[i][j]+=grid[i][j-1];
                else if(j==0) grid[i][j]+=grid[i-1][j];
                else grid[i][j]+=min(grid[i-1][j],grid[i][j-1]);
            }
        }
        return grid[grid.size()-1][grid[0].size()-1];
    }
};

/* OR
class Solution {
public:

    int minPathSum(vector<vector<int>>& grid) {
	
        int R = grid.size();
        int C = grid[0].size();
		
		// Since it chooses only down or right one, we don't have to make another array to have minimum distances.
        for(int i=0; i<R; i++){
            for(int j=0; j<C; j++){
                if(i>=1 && j>=1) // common case
                    grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
					// At point (i, j), there are only two ways to come: from (i-1, j) or (i, j-1).
					// Choose a smaller path
                
                else if(i==0 && j>=1){ // First column
                    grid[i][j] += grid[i][j-1];
                    
                }else if(j==0 && i>=1){ // First row
                    grid[i][j] += grid[i-1][j];
                }
                // if i==0 && j==0: continue;
            }
        }
        
        return grid[R-1][C-1];
    }
};
*/
