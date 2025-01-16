class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> a;
        for(int i=0;i<nums.size();i++){
            int b=nums[i];
            int c=target-b;
            if(a.find(c)!=a.end()){
                return {a[c],i};
            }
            a[b]=i;
        }
        return {-1,-1};
    }
};