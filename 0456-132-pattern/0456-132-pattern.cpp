class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> p;
        int second=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<second){
                return true;
            }
            while(!p.empty() && nums[i]>p.top()){
                second=p.top();
                p.pop();
            }
            p.push(nums[i]);
        }
        return false;
    }
};