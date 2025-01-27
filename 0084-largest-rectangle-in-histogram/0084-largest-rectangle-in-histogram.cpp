class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        stack<int>q;
        int area=0;
        arr.push_back(0);
        int n= arr.size();
        for(int i=0;i<=n-1;i++){
            while(q.size() && arr[q.top()]>=arr[i]){
                int x=q.top();
                q.pop();
                int ns=i;//next smaller
                int ps = q.empty() ? -1 : q.top();//previous smaller
                area=max(area,(ns-ps-1)*arr[x]);
            }
            q.push(i);
        }

        return area;
    }
};







