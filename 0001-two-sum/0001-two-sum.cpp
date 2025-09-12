class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int >p;
        for(int i=0;i<nums.size();i++){
            int q=nums[i];
            int r=target-q;
            if(p.find(r)!=p.end()){
                return {p[r],i};
            }
            p[q]=i;
        }
        return {-1,-1};
    }
};