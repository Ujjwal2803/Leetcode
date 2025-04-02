class Solution {
public:
    void subset1(int index, vector<int>& ans, int target, vector<int>& current, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        if (target < 0 || index >= ans.size()) {
            return;
        }
        // Include 
        current.push_back(ans[index]);
        subset1(index, ans, target - ans[index], current, result);
        current.pop_back();
        // Exclude
        subset1(index + 1, ans, target, current, result);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        subset1(0, candidates, target, current, result);
        return result;
    }
};
