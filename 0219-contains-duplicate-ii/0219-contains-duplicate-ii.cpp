class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++)
        {
            int tar=nums[i];
            if(um.find(tar)!=um.end())
            {
                if(abs(um[tar]-i)<=k) return true;
            }
            um[tar]=i;
        }
        return false;
    }
};