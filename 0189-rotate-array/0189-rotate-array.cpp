class Solution {
public:
    void reverse(vector<int>& nums,int l,int r){
        if(l>=r)return;
        int temp=nums[l];
        nums[l]=nums[r];
        nums[r]=temp;
        reverse(nums,l+1,r-1);
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
};