class Solution {
public:
    bool checkValidString(string s) {
        int mi=0,ma=0;
        for(auto x:s)
        {
            if(x=='(')
            {
                mi = mi + 1;
                ma = ma + 1;
            }
            else if(x==')')
            {
                mi = mi - 1;
                ma = ma - 1;
            }
            else{
                mi = mi - 1;
                ma = ma + 1;
            }
            if(mi<0) mi = 0;
            if(ma<0) return false;
        }
        return mi==0;
    }
};