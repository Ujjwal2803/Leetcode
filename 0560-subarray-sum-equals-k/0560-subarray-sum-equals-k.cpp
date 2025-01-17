class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int len=0;
        int n=arr.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         long long p=0;
        //         for(int r=i;r<=j;r++){
        //             p+=arr[r];
        //         }
        //         if(p==k){
        //         len=max(len,j-i+1);
        //         }
        //     }
        // }
        for(int i=0;i<n;i++){
            long long p=0;
            for(int j=i;j<n;j++){
                p+=arr[j];
                if(p==k){
                    len++;
                }
            }
        }
        return len;
    }
};