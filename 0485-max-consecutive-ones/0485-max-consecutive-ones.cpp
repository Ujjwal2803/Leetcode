class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int p=0;
        int maxn=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                p++;
            }else{
                p=0;
            }
            maxn=max(maxn,p);
        }
        return maxn;
    }
};