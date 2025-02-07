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
    bool fun(TreeNode* r1,TreeNode* r2){
        if(r1==NULL && r2==NULL)return true;
        if(r1==NULL || r2==NULL)return false;
        bool f=false;
        if(r1->val==r2->val) f=true;
        bool f1=fun(r1->left,r2->right);
        bool f2=fun(r1->right,r2->left);
        return (f&&f1&f2);
    }
    bool isSymmetric(TreeNode* node) {
        return fun(node->left,node->right);
    }
};