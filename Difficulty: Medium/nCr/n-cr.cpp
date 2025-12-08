class Solution {
  public:
    vector<vector<int>> dp = vector<vector<int>>(101,vector<int>(101,-1));
  
    int nCr(int n, int r) {
        // code here
        if(r>n) return 0;
        if(r==0 || r==n) return 1;
        
        if(dp[n][r]!=-1) return dp[n][r];
        
        dp[n][r] = nCr(n-1,r-1) + nCr(n-1,r);
        
        return dp[n][r];
    }
};