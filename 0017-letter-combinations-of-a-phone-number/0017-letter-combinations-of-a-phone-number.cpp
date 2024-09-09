class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return{};
        vector<string> ans;
        unordered_map<char,string>um;
        um['2']="abc";
        um['3']="def";
        um['4']="ghi";
        um['5']="jkl";
        um['6']="mno";
        um['7']="pqrs";
        um['8']="tuv";
        um['9']="wxyz";
        ans.push_back("");
        for(char c:digits)
        {
            string s = um[c];
            vector<string> temp;
            for(string prev:ans)
            {
                for(char d:s)
                {
                    temp.push_back(prev+d);
                }
            }
            ans=move(temp);
        }
        return ans;
    }
};