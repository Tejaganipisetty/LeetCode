class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int lcs=0;
        int cs=0;
        unordered_set<int> us(nums.begin(),nums.end());
        for(auto x:nums)
        {
            if(!us.count(x-1))
            {
                int x1=x;
                cs=1;
                while(us.count(x1+1))
                {
                    x1++;
                    cs++;
                }
            }
            lcs=max(lcs,cs);
        }
        return lcs;
    }
};