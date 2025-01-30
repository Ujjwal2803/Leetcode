class Solution {
public:
    int findMin(vector<int>& arr) {
         int low=0,high=arr.size()-1;
         int mina=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[low]<=arr[mid]){
                mina=min(arr[low],mina);
                low=mid+1;
            }else{
                mina=min(arr[mid],mina);
                high=mid-1;
            }
        }
        return mina;
    }
};