class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        multiset<int>p;
        int i=0,j=k-1;
        vector<int>q;
        for(int k=0;k<=j;k++){
            p.insert(arr[k]);
        }
        q.push_back(*p.rbegin());
        
        for(int i=k;i<arr.size();i++){
            p.insert(arr[i]);
            p.erase(p.find(arr[i-k]));
            q.push_back(*p.rbegin());
        }

        return q;
    }
};