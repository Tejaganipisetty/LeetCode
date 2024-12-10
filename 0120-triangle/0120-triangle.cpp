class Solution {
public:
    int fun(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>& dp){
        if(i==triangle.size()-1) return triangle[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int d1=triangle[i][j]+fun(i+1,j,triangle,dp);
        int d2=triangle[i][j]+fun(i+1,j+1,triangle,dp);
        return dp[i][j]=min(d1,d2);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return fun(0,0,triangle,dp);
    }
};