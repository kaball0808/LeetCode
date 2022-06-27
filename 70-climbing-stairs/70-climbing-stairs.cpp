class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n,0);
        if(n == 1 || n == 2)return n;
        dp[0] = 1;
        dp[1] = 2;
        for(int i=2;i<n;i++){
            dp[i] = dp[i-2]+dp[i-1];
        }
        return dp[n-1];
    }
};
