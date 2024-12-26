class Solution {
public:
    int fun(int ind,int buy,vector<int>&prices,int fee,vector<vector<int>>&dp){
        if(ind==prices.size()) return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        if(buy)
        {
            return dp[ind][buy]=max(-prices[ind]+fun(ind+1,0,prices,fee,dp),fun(ind+1,1,prices,fee,dp));
        }
        else return dp[ind][buy]=max(prices[ind]-fee+fun(ind+1,1,prices,fee,dp),fun(ind+1,0,prices,fee,dp));   
    }
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>>dp(prices.size()+1,vector<int>(2,-1));
        return fun(0,1,prices,fee,dp);
    }
};