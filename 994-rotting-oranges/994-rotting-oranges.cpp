class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        
        int time = -1, fresh = 0;
        vector<pair<int,int>> dirs{{0,1},{0,-1},{1,0},{-1,0}};
        queue<pair<int,int>> que;
        
        for(int i = 0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]==2) que.push({i,j});
                else if (grid[i][j]==1) fresh++;
            }
        }
        
        while(!que.empty()){
            int rotnum = que.size();
            for(int i=0;i<rotnum;i++){
                auto curr = que.front();
                que.pop();
                for(auto dir:dirs){
                    int x = curr.first + dir.first;
                    int y = curr.second + dir.second;

                    if(x>=0 && x<n && y>=0 && y<m && grid[x][y]==1){
                        grid[x][y]=2;
                        que.push({x,y});
                        fresh--;
                    }
                }
            }
            time ++;
        }
        
        return (fresh > 0) ? -1 : ((time == -1) ? 0 : time);
    }
};