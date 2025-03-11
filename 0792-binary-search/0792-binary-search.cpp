class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int a=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                a=mid;
                break;
            }
            if(nums[mid]>target){
                h=mid-1;
            }
            if(nums[mid]<target){
                l=mid+1;
            }
        }
        return a;
    }
};