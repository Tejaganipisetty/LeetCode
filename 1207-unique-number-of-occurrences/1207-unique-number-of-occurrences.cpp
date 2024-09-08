class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> um;
        for(int n:arr)
        {
            um[n]++;
        }
        unordered_set<int> us1(arr.begin(),arr.end());
        unordered_set<int> us2;
        for(auto it:um)
        {
            us2.insert(it.second);
        }
        if(us2.size()==us1.size()) return true;
        return false;
    }
};