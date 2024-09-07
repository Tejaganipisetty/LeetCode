class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++)
        {
            int n1 = nums[i];
            int n2 = target-nums[i];
            if(um.find(n2)!=um.end())
            {
                return {um[n2],i};
            }
            um[n1]=i;
        }
        return{-1,-1};
    }
};