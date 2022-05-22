class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> answer;
        int n = matrix.size(), m = matrix[0].size();
        //Four-side pointer
        int top = 0, bot = n-1, left = 0, right = m-1;
        int i;
        while(top<=bot && left<=right){
            for(i = left;i<=right;i++) {
                answer.push_back(matrix[top][i]);
            }
            top++;
            
            for(i = top;i<=bot;i++){
                answer.push_back(matrix[i][right]);
            }
            right--;
            if(left>right||top>bot) break;
            for(i = right;i>=left;i--) {
                answer.push_back(matrix[bot][i]);
            }
            bot--;
            for(i = bot;i>=top;i--){
                answer.push_back(matrix[i][left]);
            }
            left++;
            
        }
        return answer;
    }
};