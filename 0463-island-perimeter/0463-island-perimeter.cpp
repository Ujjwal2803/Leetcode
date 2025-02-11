class Solution {
public:
    int islandPerimeter(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==1){
                    ans+=4;
                    if(i-1>=0 and v[i-1][j]==1)ans--;
                    if(i+1<n and v[i+1][j]==1)ans--;
                    if(j-1>=0 and v[i][j-1]==1)ans--;
                    if(j+1<m and v[i][j+1]==1)ans--;
                }
            }
        }
        return ans;
    }
};