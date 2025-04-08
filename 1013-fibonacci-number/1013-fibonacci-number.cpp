class Solution {
public:
//tabulation
    int fib(int n) {
        int dp[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=-1;
        }
        return fibmen(n,dp);
    }
    int fibmen(int n,int dp[]) {
        if(n==0 || n==1) return n;
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};