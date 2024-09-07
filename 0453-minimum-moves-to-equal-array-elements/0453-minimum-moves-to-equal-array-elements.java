class Solution {
    public int minMoves(int[] nums) {
        int min = Integer.MAX_VALUE;
        int moves=0;
        for(int n:nums)
        {
           min = Math.min(min,n);   
        }
        for(int n:nums)
        {
            moves = moves + n-min;
        }
        return moves;
    }
}