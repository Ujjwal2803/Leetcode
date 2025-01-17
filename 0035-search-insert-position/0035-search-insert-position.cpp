class Solution {
public:
    int searchInsert(vector<int>& arr, int k) {
       int floorr=-1;
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==k){
                return mid;
            }else if(arr[mid]>k){
                high=mid-1;
            }else{
                floorr=mid;
                low=mid+1;
            }
        }
        return floorr+1; 
    }
};