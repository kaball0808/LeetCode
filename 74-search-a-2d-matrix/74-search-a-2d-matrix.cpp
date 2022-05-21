class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int i = m-1, j = 0;
        
        while(i >-1 && j < n ){
            int cur = matrix[i][j];
            if(cur==target) return true;
            else if(cur>target) i--;
            else j++;
        }
        return false;
    }
};