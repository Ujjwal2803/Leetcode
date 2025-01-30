class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(target==arr[mid]){
                return mid;
            }
            if(arr[low]<=arr[mid]){
                if(arr[low] <=target && arr[mid]>=target){//left part sorted
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(arr[mid]<=target && arr[high]>=target){//right part sorted
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }

        }
        return -1;
    }
};