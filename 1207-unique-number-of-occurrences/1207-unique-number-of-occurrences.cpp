class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> um;
        for(int n:arr)
        {
            um[n]++;
        }
        unordered_set<int> us;
        for(auto it:um)
        {
            us.insert(it.second);
        }
        if(um.size()==us.size()) return true;
        return false;
    }
};