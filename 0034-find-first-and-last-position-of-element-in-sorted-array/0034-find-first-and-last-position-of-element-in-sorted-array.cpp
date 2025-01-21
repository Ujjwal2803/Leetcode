class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int m=-1,n=-1;
        int i=0,j=nums.size()-1;
        while(i<nums.size() && j>=0){
        if(nums[i]==target &&  m==-1){
            m=i;
        }
        if(nums[j]==target &&  n==-1){
            n=j;
        }
        i++;
        j--;
        }
        return {m,n};
    }
};