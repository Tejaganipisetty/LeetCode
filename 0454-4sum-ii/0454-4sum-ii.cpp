class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int cnt=0;
        unordered_map<int,int> um;
        for(int a:nums1)
        {
            for(int b:nums2)
            {
                um[a+b]++;
            }
        }
        for(int c:nums3)
        {
            for(int d:nums4)
            {
                int target=-(c+d);
                if(um.find(target)!=um.end())
                {
                    cnt = cnt + um[target];
                }
            }
        }
        return cnt;
        
    }
};