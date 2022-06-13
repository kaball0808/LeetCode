class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];
        DFS(image,sr,sc,newColor,oldColor);
        return image;
    }
    
    void DFS(vector<vector<int>>& image, int i, int j, int newColor, int oldColor){
        if(oldColor == newColor) return;
        if(i>=image.size() || i<0 || j>=image[0].size() || j<0) return;
        if(image[i][j]!=oldColor) return;
        
        image[i][j] = newColor;
        
        DFS(image,i+1,j,newColor,oldColor);
        DFS(image,i-1,j,newColor,oldColor);
        DFS(image,i,j+1,newColor,oldColor);
        DFS(image,i,j-1,newColor,oldColor);
    }
};