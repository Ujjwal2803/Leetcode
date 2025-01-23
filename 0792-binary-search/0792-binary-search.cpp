class Solution {
public:
    int binarysearch(vector<int>& arr,int a,int s,int e ){
	
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
	if(arr[mid]==a){
		return mid;
	}else if(arr[mid]<a){
		return binarysearch(arr,a,mid+1,e);
	}else if(arr[mid]>a){
		return binarysearch(arr,a,s,mid-1);
	}else{
        return -1;
    }
    }

    int search(vector<int>& nums, int target) {
       int s=0,e=nums.size()-1;
       return  binarysearch(nums,target,s, e );
    }
};