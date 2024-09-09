class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()==1) return 0;
        sort(nums.begin(),nums.end());
        int l=0,r=1;
        int ans=0;
        while(r<nums.size())
        {
            int diff = nums[r]-nums[l];
            ans = max(ans,diff);
            l++;
            r++;
        }
        return ans;
        
    }
};