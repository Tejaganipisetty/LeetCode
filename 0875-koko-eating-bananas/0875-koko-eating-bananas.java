class Solution {
    public int maxele(int[] a)
    {
        int maxnum=a[0];
        for(int i=1;i<a.length;i++)
        {
            if(a[i]>maxnum) maxnum=a[i];
        }
        return maxnum;
    }
    public int bananas(int[] b,int mid)
    {
        double sum=0;
        for(int i=0;i<b.length;i++)
        {
            sum = sum + Math.ceil((double)b[i]/mid);
        }
        return (int)sum;
    }
    public int minEatingSpeed(int[] piles, int h) {
        int l=1,r=maxele(piles);
        int ans=0;
        while(l<=r)
        {
            int mid = (l+r)/2;
            int eating=bananas(piles,mid);
            if(eating<=h)
            {
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        return ans;
    }
}