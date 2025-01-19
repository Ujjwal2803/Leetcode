class Solution {
public:
    int findMin(vector<int>& s) {
        set<int> p(s.begin(),s.end());
        return *p.begin();
    }
};