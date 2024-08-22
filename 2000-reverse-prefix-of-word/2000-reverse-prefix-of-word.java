class Solution {
    public String rev(String s)
    {
        char[] ch = s.toCharArray();
        int l=0,r=s.length()-1;
        while(l<=r)
        {
            char cha = ch[l];
            ch[l]=ch[r];
            ch[r]=cha;
            l++;
            r--;
        }
        String s1 = new String(ch);
        return s1;
    }
    public String reversePrefix(String word, char ch) {
        StringBuilder sb = new StringBuilder();
        int i = word.indexOf(ch);
        if(i==-1) return word;
        return rev(word.substring(0,i+1))+word.substring(i+1);
    }
}