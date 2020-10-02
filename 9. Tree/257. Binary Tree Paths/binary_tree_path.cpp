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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> vec;
        if(root!=NULL) dfs(root,"",vec);
        return vec;
    }
    
    void dfs(TreeNode* node, string path, vector<string>& vec){
        if(node->left==NULL && node->right==NULL) vec.push_back(path + to_string(node->val));
        if(node->left!=NULL) dfs(node->left, path+to_string(node->val)+"->", vec);
        if(node->right!=NULL) dfs(node->right, path+to_string(node->val)+"->", vec);
    }
};