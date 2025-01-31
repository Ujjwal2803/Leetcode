class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        int mod=1e9+7;
        // long long lcm=(a*b)/(__gcd(a,b)),ans=-1;
        long long ans=-1;
        // long long low=min(a,b),high=min(a*n,b*n);
        long long low = 0, high = 1LL * (a + b) * n;
        long long lcm = (1LL * a / __gcd(a, b)) * b;
        while(low<=high){
            long long mid= (low+high)/2;
            long long count=(mid/a)+(mid/b)-(mid/lcm);
            if(count<n){
                low=mid+1;
            }else if(count>n){
                high=mid-1;
            }else{
                ans=mid;
                high=mid-1;//may be mid 
            }
            
        }
        return ans%mod;
    }
};