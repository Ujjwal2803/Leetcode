class Solution {
public:
    bool isPerfectSquare(int num) {
        int n=num/2;
        if(n<2)return true;
        long long l=1,h=n;
        while(l<=h){
            long long mid=(l+h)/2;
            if(mid*mid==num) return mid;
            else if(mid*mid<num){
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return 0;
    }
};