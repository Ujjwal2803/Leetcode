class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>p;
        stack<int>q;
        map<int,int>r;
        for(int i=nums2.size()-1;i>=0;i--){
            while(q.size() && q.top()<=nums2[i]){// monotonicity
                q.pop();
            }
            if(q.size()==0){
                // p.push_back(-1);
                r[nums2[i]]=-1;
            }else{
                // p.push_back(q.top());
                r[nums2[i]]=q.top();
            }
            q.push(nums2[i]);
        }
        for(auto n:nums1){
            p.push_back(r[n]);
        }

        return p;
    }
};