class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> freq;
        int result=nums.size()/2;
        for(int num:nums){
            freq[num]++;
            if(freq[num]>result){
                return num;
            }
        }
        return -1;
    }
};