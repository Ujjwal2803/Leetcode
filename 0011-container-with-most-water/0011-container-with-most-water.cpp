class Solution {
public:
    int maxArea(vector<int>& a) {
        int i=0,j=a.size()-1;
        int ans=INT_MIN;
        while(i<j){
            int area=(min(a[j],a[i]))*(j-i);
            ans=max(area,ans);
            if(a[i]<a[j]){
                i++;
            }
            else if(a[i]>a[j]){
                j--;
            }
            else{
                i++;
            }

        }
        return ans;
    }
};