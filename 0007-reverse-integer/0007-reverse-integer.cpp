class Solution {
public:
    int reverse(int x) {
        long long p=0;
        while(x!=0){
            p=p*10+x%10;
            x=x/10;
        }
        if (p > INT_MAX || p < INT_MIN) {
            return 0;
        }
        return p;
    }
};