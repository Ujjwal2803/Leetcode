class Solution {
public:
    int longestOnes(vector<int>& v, int k) {
        int j=0,i=0;
        int n=v.size();
        int mx=INT_MIN;
        int count=0;
        while(j<n){
            if(v[j]==0) count++;
            while(count>k){
                if(v[i]==0){
                    count--;
                }
                i++;
            }
            j++;
            mx=max(mx,j-i);
        }
        return max(mx,j-i);
    }
};
