class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>p;
        vector<int>q{nums.begin(),nums.end()};
        vector<int>r;
        for(auto n:nums){
            q.push_back(n);
        }
        for(int i=q.size()-1;i>=0;i--){
            while(p.size() && p.top()<=q[i]){
                p.pop();
            }
            if(p.size()==0){
                r.push_back(-1);
            }else{
                r.push_back(p.top());
            }
            p.push(q[i]);
        }
        reverse(r.begin(),r.end());
        return vector<int>(r.begin(),r.begin()+nums.size());
    }
};