class Solution {
    public int mySqrt(int x) {
        int l=1,h=x;
        int ans=0;
        while(l<=h)
        {
            int m = (l+h)/2;
            if(m<=(x/m))
            {
                ans=m;
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        return ans;
    }
}