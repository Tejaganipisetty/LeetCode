class Solution {
public:
    int fun(int ind,vector<int>&coins,int amount,vector<vector<int>>&dp){
        if(ind==0){
            if(amount%coins[ind]==0) return amount/coins[ind];
            else return 1e9;
        }
        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int a = fun(ind-1,coins,amount,dp);
        int b = 1e9;
        if(amount>=coins[ind]) b = 1+fun(ind,coins,amount-coins[ind],dp);
        return dp[ind][amount]=min(a,b);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1,-1));
        int res = fun(coins.size()-1,coins,amount,dp);
        return (res>=1e9)? -1:res;
        
    }
};