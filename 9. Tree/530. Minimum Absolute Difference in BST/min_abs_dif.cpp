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
    int mn = INT_MAX;
    int pre = -1;
    int getMinimumDifference(TreeNode* root) {
        if(root==NULL) return mn;
        getMinimumDifference(root->left);
        if(pre>=0){
            mn = min(mn, abs(pre-root->val));
        }
        pre = root->val;
        getMinimumDifference(root->right);
        return mn;
    }
};