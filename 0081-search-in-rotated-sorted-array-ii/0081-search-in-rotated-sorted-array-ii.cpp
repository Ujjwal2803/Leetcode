class Solution {
public:
    bool search(vector<int>& nums, int target) {
        set<int>p(nums.begin(),nums.end());
        if(p.find(target)!=p.end()){
            return true;
        }
        return false;
    }
};