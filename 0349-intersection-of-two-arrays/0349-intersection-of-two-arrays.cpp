class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> us1(nums1.begin(),nums1.end());
        unordered_set<int> us2(nums2.begin(),nums2.end());
        for(auto x:us1)
        {
            if(us2.count(x)) ans.push_back(x);
        }
        return ans;
    }
};