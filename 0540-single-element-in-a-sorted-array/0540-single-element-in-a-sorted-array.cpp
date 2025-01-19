class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        map<int,int>p;
        for(auto a:arr){
            p[a]++;
        }
        for(auto a:p){
            if(a.second==1){
                return a.first;
            }
        }
        return -1;
    }
};