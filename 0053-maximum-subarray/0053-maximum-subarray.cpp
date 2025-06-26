class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum;
        int maxn=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxn=max(sum,maxn);
            if(sum<0){ // kadanes algo
                sum=0;
            }
        }
        return maxn;
    }
};