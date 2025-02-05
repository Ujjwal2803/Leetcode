class Solution {
public:
    void subset1(int i,vector<int>val,vector<int>& a,vector<vector<int>>& ans){
        if(i>=a.size()){
            ans.push_back(val);
            return;
        }
        //exclude
        subset1(i+1,val,a,ans);
        //include
        val.push_back(a[i]);
        subset1(i+1,val,a,ans);
    }
    vector<vector<int>> subsets(vector<int>& a) {
        vector<vector<int>> ans;
        vector<int> val;
        int i=0;
        subset1(i,val,a,ans);
        return ans;
    }
};