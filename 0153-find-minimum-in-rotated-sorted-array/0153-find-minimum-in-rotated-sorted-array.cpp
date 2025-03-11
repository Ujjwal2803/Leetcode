class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        int mina=INT_MAX;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[l]<=nums[mid]){
                mina=min(mina,nums[l]);
                l=mid+1;
            }else{
                mina=min(mina,nums[mid]);
                h=mid-1;
            }
        }
        return mina;
    }
    
};