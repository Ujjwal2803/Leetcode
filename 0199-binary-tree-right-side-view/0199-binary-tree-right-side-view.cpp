/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>p;
        if(root==nullptr)return p;
        q.push(root);
        while(q.size()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* x=q.front();
                if(i==n-1)p.push_back(x->val);
                q.pop();
                if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
            }
        }
        return p;
    }
};