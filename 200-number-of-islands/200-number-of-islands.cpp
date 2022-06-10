class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int island = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    DFS(grid,i,j);
                    island++;
                }
            }
        }
        return island;
    }
    
    void DFS(vector<vector<char>>& grid, int i,int j){
        int m = grid.size(), n = grid[0].size();
        if (i<0 || i>=m || j<0 || j>=n) return;
        
        if(grid[i][j]=='0' || grid[i][j]=='2' ) return;
        
        grid[i][j]='2';
        
        DFS(grid, i+1,j);
        DFS(grid, i-1,j);
        DFS(grid, i,j+1);
        DFS(grid, i,j-1);
    }
};