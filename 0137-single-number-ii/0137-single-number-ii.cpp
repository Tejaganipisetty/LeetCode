class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        unordered_map<int,int> um;
        for(int n:nums)
        {
            um[n]++;
        }
        for(auto it:um)
        {
            if(it.second==1) {
                ans=it.first;
                break;
            }
        }
        return ans;
    }
};