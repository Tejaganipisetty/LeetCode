class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> um;
        for(int n:nums)
        {
            um[n]++;
        }
        for(auto it:um)
        {
           if(it.second==1) ans.emplace_back(it.first);
        }
        return ans;
    }
};