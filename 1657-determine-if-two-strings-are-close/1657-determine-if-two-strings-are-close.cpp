class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()) return false;
        unordered_map<char,int> um1,um2;
        for(auto x:word1) um1[x]++;
        for(auto x:word2) um2[x]++;
        unordered_set<char> us1(word1.begin(),word1.end());
        unordered_set<char> us2(word2.begin(),word2.end());
        if(us1!=us2) return false;
        vector<int> n1,n2;
        for(auto it:um1) n1.push_back(it.second);
        for(auto it:um2) n2.push_back(it.second);
        sort(n1.begin(),n1.end());
        sort(n2.begin(),n2.end());
        return n1==n2;
    }
};