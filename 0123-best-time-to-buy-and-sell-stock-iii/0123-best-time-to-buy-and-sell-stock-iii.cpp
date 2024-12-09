class Solution {
public:
    int fun(int ind,int buy,vector<int>&prices,vector<vector<vector<int>>>&dp,int cap){
        if(cap==0) return 0;
        if(ind==prices.size()) return 0;
        int profit;
        if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
        if(buy) profit=max((-prices[ind]+fun(ind+1,0,prices,dp,cap)),(fun(ind+1,1,prices,dp,cap)));
        else profit=max((prices[ind]+fun(ind+1,1,prices,dp,cap-1)),(fun(ind+1,0,prices,dp,cap)));
        return dp[ind][buy][cap]=profit;
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size()+1,vector<vector<int>>(2,vector<int>(3,-1)));
        return fun(0,1,prices,dp,2);
    }
};