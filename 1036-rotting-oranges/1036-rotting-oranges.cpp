class Solution {
public:
    bool safe(int newx, int newy, int n, int m, vector<vector<int>>& visited, vector<vector<int>>& arr){
        if(newx < 0 or newy < 0 or newx >= n or newy >= m){
            return false;
        }
        if(visited[newx][newy] == 1 or arr[newx][newy] != 1){
            return false;
        }
        // cord are valid
        // you are coming for the first time
        // you are stading on a fresh orange
        visited[newx][newy] = true;
        return true;
    }
    int orangesRotting(vector<vector<int>>& arr) {
        int fresh = 0;
        queue<pair<pair<int, int>, int>> q;
        int n = arr.size(); // rows
        int m = arr[0].size(); // col
        vector<vector<int>> visited(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr[i][j] == 1){ // fresh orange
                    fresh++;
                }
                else if(arr[i][j] == 2){ // rotten orange
                    q.push({{i, j}, 0});
                    visited[i][j] = 1;
                }
            }
        }
        if(fresh == 0){ // no fresh orange was present
            return 0;
        }
        int ans = -1; // bcoz we donot know whether the ans will be possible or nor

    while(!q.empty()){
        pair<int, int> cord = q.front().first;
        int oldx = cord.first;
        int oldy = cord.second;
        int tym = q.front().second;
        q.pop();
        ans = max(ans, tym);
        if(safe(oldx + 1, oldy, n, m, visited, arr)){ // down
            fresh--; // bcoz this is getting rotten now
            q.push({{oldx + 1, oldy}, tym + 1});
        }
        if(safe(oldx - 1, oldy, n, m, visited, arr)){ // top
            fresh--;
            q.push({{oldx - 1, oldy}, tym + 1});
        }
        if(safe(oldx, oldy + 1, n, m, visited, arr)){ // right
            fresh--;
            q.push({{oldx, oldy + 1}, tym + 1});
        }
        if(safe(oldx, oldy - 1, n, m, visited, arr)){ // left
            fresh--;
            q.push({{oldx, oldy - 1}, tym + 1});
        }
        }
        if(fresh != 0){
            return -1;
        }
        return ans;
    }
};









