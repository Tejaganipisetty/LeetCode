class Solution {
public:
    int fun(int ind,vector<int>&nums,int target)
    {
        if(ind==-1){
            if(target==0) return 1;
            else return 0;
        }
        int pos = fun(ind-1,nums,target-nums[ind]);
        int neg = fun(ind-1,nums,target+nums[ind]);
        return pos+neg;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return fun(nums.size()-1,nums,target);
    }
};