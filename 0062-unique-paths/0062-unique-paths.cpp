class Solution {
public:
    int fun(int i,int j,vector<vector<int>>&dp)
    {
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int l = fun(i,j-1,dp);
        int u = fun(i-1,j,dp);
        return dp[i][j]=l+u;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return fun(m-1,n-1,dp);
    }
};