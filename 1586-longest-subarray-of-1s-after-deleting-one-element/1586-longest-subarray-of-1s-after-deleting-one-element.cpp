class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0;
        int maxn=0;
        int count=0;
        while(j<nums.size()){
            if(nums[j]==0){
                count++;
            }
            while(count>1){
                if(nums[i]==0){
                    count--;
                }
                i++;
            }
            maxn=max(maxn,j-i);
            j++;
        }
        return maxn;
    }
};