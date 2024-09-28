class Solution {
public:
    bool search(vector<int>&a, int target)
    {
        return binary_search(a.begin(),a.end(),target);
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto x:matrix)
        {
            if(search(x,target)) return true;
        }
        return false;
    }
};