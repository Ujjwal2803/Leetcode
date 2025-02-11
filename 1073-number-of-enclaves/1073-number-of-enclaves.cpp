// class Solution {
// public:
//     void dfs(vector<vector<int>>& arr,int m,int n,int i,int j){
//         if(i<0 or j<0 or i>=n or j>=m or arr[i][j]!='1')return;
//         arr[i][j]='0';
//         dfs(arr,m,n,i+1,j);
//         dfs(arr,m,n,i-1,j);
//         dfs(arr,m,n,i,j+1);
//         dfs(arr,m,n,i,j-1);
//     }
//     int numEnclaves(vector<vector<int>>& v) {
//         int n=v.size();
//         int m=v[0].size();
//         if(n==0 or m==0){
//             return 0;
//         }
//         for(int i=0;i<n;i++){
//             dfs(v,m,n,i,0);
//             dfs(v,m,n,i,m-1); 
//         }
//         for(int i=0;i<m;i++){
//             dfs(v,m,n,0,i);
//             dfs(v,m,n,n-1,i); 
//         }
//         int ans;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(v[i][j]==1){
//                   ans++;  
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    void dfs(vector<vector<int>>& arr, int m, int n, int i, int j) {
        if (i < 0 || j < 0 || i >= n || j >= m || arr[i][j] != 1) return;
        arr[i][j] = 0; // Mark visited
        
        dfs(arr, m, n, i + 1, j);
        dfs(arr, m, n, i - 1, j);
        dfs(arr, m, n, i, j + 1);
        dfs(arr, m, n, i, j - 1);
    }

    int numEnclaves(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        if (n == 0 || m == 0) return 0;

        // Remove land cells connected to the boundary
        for (int i = 0; i < n; i++) {
            if (v[i][0] == 1) dfs(v, m, n, i, 0);
            if (v[i][m - 1] == 1) dfs(v, m, n, i, m - 1);
        }
        for (int j = 0; j < m; j++) {
            if (v[0][j] == 1) dfs(v, m, n, 0, j);
            if (v[n - 1][j] == 1) dfs(v, m, n, n - 1, j);
        }

        // Count remaining land cells
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] == 1) {
                    ans++;  
                }
            }
        }
        return ans;
    }
};
