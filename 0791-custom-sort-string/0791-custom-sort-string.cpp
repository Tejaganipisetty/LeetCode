class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        unordered_map<char,int> um;
        for(char c:s)
        {
            um[c]++;
        }
        for(char c:order)
        {
            if(um.find(c)!=um.end())
            {
                ans.append(um[c],c);
                um.erase(c);
            }
        }
        for(auto it:um)
        {
            ans.append(it.second,it.first);
        }
        return ans;
    }
};