class Solution {
public:
    int fun(int ind,int sum,vector<int>&nums,vector<vector<int>>&dp){
        if(sum==0) return 1;
        if(ind==0) return nums[ind]==sum;
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        int d = fun(ind-1,sum,nums,dp);
        int t = 0;
        if(sum>=nums[ind]) t = fun(ind-1,sum-nums[ind],nums,dp);
        return dp[ind][sum]= d||t;
    }
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0) return false;
        vector<vector<int>>dp(nums.size()+1,vector<int>((sum/2)+1,-1));
        if(fun(nums.size()-1,sum/2,nums,dp)) return true;
        return false;
    }
};