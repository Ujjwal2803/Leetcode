class Solution {
    public int reverse(int x) {
        long p=0;
        while(x!=0){
            p=p*10+x%10;
            x=x/10;
        }
        if(p>Integer.MAX_VALUE || p<Integer.MIN_VALUE){
            return 0;
        }
        return (int)p;
    }
}