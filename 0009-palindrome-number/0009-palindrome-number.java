class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)return false;
        int p=0;
        int dup=x;
        while(x!=0){
            p=p*10+x%10;
            x/=10;
        }
        if(p==dup)return true;
        return false;
    }
}