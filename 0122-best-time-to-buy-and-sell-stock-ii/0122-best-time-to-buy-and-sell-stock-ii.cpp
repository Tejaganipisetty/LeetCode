class Solution {
public:
    int fun(int ind,int buy,vector<int>&prices,vector<vector<int>>&dp){
        if(ind>=prices.size()) return 0;
        int profit;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        if(buy) profit=max((-prices[ind]+fun(ind+1,0,prices,dp)),(fun(ind+1,1,prices,dp)));
        else profit=max((prices[ind]+fun(ind+1,1,prices,dp)),(fun(ind+1,0,prices,dp)));
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size()+1,vector<int>(3,-1));
        return fun(0,1,prices,dp);
    }
};