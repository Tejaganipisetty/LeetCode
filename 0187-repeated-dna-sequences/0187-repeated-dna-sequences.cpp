class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        if(s.length()==10)
        {
            return ans;
        }
        unordered_map<string,int> um;
        for(int i=0;i<s.length();i++)
        {
            string seq = s.substr(i,10);
            um[seq]++;
        }
        for(auto it:um)
        {
            if(it.second>1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};