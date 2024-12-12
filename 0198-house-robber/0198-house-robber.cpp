class Solution {
public:
    int fun(int ind,vector<int>&nums,vector<int>&dp){
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int p=nums[ind]+fun(ind-2,nums,dp);
        int n=fun(ind-1,nums,dp);
        return dp[ind]=max(n,p);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return fun(nums.size()-1,nums,dp);
    }
};