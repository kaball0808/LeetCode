class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size(), small = matrix[0][0], big = matrix[n-1][n-1];
        while(small<big){
            int mid = small + (big-small)/2;
            int count = binaryCountSmall(mid,matrix);
            if(count<k){
                small = mid+1;
            }
            else{
                big = mid;
            }
        }
        return small;
    }
    
    int binaryCountSmall(int mid, vector<vector<int>>& matrix){
        int count = 0, n = matrix.size(), i = n-1,j=0;
        // Count element smaller than mid from left-bottom corner
        while(i>=0 && j<n){
            if(matrix[i][j]<=mid) {
                count += (i+1);
                j++;
            }
            else i--;
        }
        return count;
    }
};