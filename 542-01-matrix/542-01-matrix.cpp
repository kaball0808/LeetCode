class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        
        vector<pair<int,int>> dirs {{1,0},{-1,0},{0,1},{0,-1}};
        queue<pair<int,int>> que;
        vector<vector<int>> ans(n , vector<int>(m,-1) );
        
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(mat[i][j] == 0){
                    ans[i][j] = 0;
                    que.push({i,j});
                }
            }
        }
        
        
        while(!que.empty()){
            
            auto curr = que.front();
            que.pop();
            int curr_x = curr.first;
            int curr_y = curr.second;
            
            for(auto dir :dirs){
                int x = curr_x + dir.first;
                int y = curr_y + dir.second;
                
                if(x >= 0 && x < n && y >= 0 && y < m && mat[x][y]==1 && ans[x][y]==-1){
                    ans[x][y]=ans[curr_x][curr_y]+1;
                    que.push({x,y});
                }
            }
        }
        return ans;
    }
};