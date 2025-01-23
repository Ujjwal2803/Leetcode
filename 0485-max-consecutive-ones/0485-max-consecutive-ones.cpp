class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        // int p=0;
        // int maxn=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==1){
        //         p++;
        //     }else{
        //         p=0;
        //     }
        //     maxn=max(maxn,p);
        // }
        // return maxn;
        //**************************2nd method sliding window
        // int i=0;
        // int maxn=0;
        // for(int j=0;j<nums.size();j++){
        //     if(nums[j]==0){
        //         i=j+1;
        //     }else {
        //         maxn = max(maxn, j - i + 1);
        //     }
        // }
        // return maxn;
        //***********************************or
        int j=0,i=0;
       int n=v.size();
       int mx=INT_MIN;
       while(j<n){
        if(v[j]==1) j++;
        else{
            mx=max(mx,j-i);
            j++;
            i=j;
        }
       }
       return max(mx,j-i);
        
   }

};