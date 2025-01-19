class Solution {
public:
    int findKthPositive(vector<int>& vec, int k) {
        int n=vec.size();
       for (int i = 0; i < n; i++) {
        if (vec[i] <= k) k++; //shifting k
        else break;
    }
    return k;
    }
};