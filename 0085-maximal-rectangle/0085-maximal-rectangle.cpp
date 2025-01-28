class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        stack<int> q;
        int area = 0;
        arr.push_back(0);
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            while (!q.empty() && arr[q.top()] >= arr[i]) {
                int x = q.top();
                q.pop();
                int ns = i;
                int ps = q.empty() ? -1 : q.top();
                area = max(area, (ns - ps - 1) * arr[x]);
            }
            q.push(i);
        }
        return area;
    }

    int maximalRectangle(vector<vector<char>>& v) {
        if (v.empty() || v[0].empty()) return 0;
        
        int m = v.size();
        int n = v[0].size();
        vector<int> k(n, 0);
        int ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (v[i][j] == '1') {
                    k[j]++;
                } else {
                    k[j] = 0;
                }
            }
            ans = max(ans, largestRectangleArea(k));
        }

        return ans;
    }
};
