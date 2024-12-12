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
        if(nums.size()==1) return nums[0];
        int n = nums[nums.size()-1];
        nums.pop_back();
        vector<int>dp1(nums.size(),-1);
        int ans1=fun(nums.size()-1,nums,dp1);
        nums.push_back(n);
        nums.erase(nums.begin());
        vector<int>dp2(nums.size(),-1);
        int ans2=fun(nums.size()-1,nums,dp2);
        return max(ans1,ans2);
        
    }
};