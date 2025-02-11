class Solution {
public:
    void dfs(vector<vector<int>>& arr,int m,int n,int i,int j,int & cnt){
        if(i<0 or j<0 or i>=n or j>=m or arr[i][j]!=1)return;
        arr[i][j]=0;
        cnt++;
        dfs(arr,m,n,i+1,j,cnt);
        dfs(arr,m,n,i-1,j,cnt);
        dfs(arr,m,n,i,j+1,cnt);
        dfs(arr,m,n,i,j-1,cnt);
    }
    int maxAreaOfIsland(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        if(n==0 or m==0){
            return 0;
        }
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                    dfs(arr,m,n,i,j,cnt);
                    ans=max(ans,cnt);
                    cnt=0;
                }
            }
        }
        return ans;
    }
};