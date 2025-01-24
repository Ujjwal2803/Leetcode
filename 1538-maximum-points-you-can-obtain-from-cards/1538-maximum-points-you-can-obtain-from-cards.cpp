class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int maxn=0;
        int sum=0;
        for(int j=0;j<k;j++){
            sum+=arr[j];
            // maxn=max(sum,maxn);
        }
        // while(j>=0 && i>arr.size()-1-k){
        //     sum+=-arr[j]+arr[i];
        //     j--;
        //     maxn=max(maxn,sum);
        // }
        maxn = sum;
        int n=arr.size();
        int j = k - 1;
        int i = n - 1;
        while (j >= 0) {
            sum += arr[i] - arr[j];
            maxn = max(maxn, sum);
            j--;
            i--;
        }
        return maxn;
    }
};