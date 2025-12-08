class Solution {
  public:
    int numberOfWays(int n) {
        // code here
        vector<int> dp(n);
        dp[0] = 1;
        dp[1] = 2;
        
        for(int i=2;i<n;i++){
            dp[i] = dp[i-2]+dp[i-1];
        }
        
        return dp[n-1];
    }
};