class Solution {
public:
    void dfs(vector<vector<char>>& arr,int m,int n,int i,int j){
        if(i<0 or j<0 or i>=n or j>=m or arr[i][j]!='1')return;
        arr[i][j]='0';
        dfs(arr,m,n,i+1,j);
        dfs(arr,m,n,i-1,j);
        dfs(arr,m,n,i,j+1);
        dfs(arr,m,n,i,j-1);
    }
    int numIslands(vector<vector<char>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        if(n==0 or m==0){
            return 0;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='1'){
                    ans++;
                    dfs(arr,m,n,i,j);
                }
            }
        }
        return ans;
    }
};