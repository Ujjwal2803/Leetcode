class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // map<int,int>p;
        // for(int i=0;i<nums.size();i++){
        //     p[nums[i]]++;
        // }
        // for(const auto it:p ){
        //     if(it.second==1)return it.first;
        // }
        // return -1;
        // unordered_set<int>p;
        // for(int i=0;i<nums.size();i++){
        //     p.insert(nums[i]);
        // }
        // for(const auto it:p ){
        //     if(p.count(it)==1)return it;
        // }
        // return -1;
        unordered_set<int> s;
        for (int num : nums) {
            if (s.count(num))
                s.erase(num);
            else
                s.insert(num); 
        }
        return *s.begin();
    }
};