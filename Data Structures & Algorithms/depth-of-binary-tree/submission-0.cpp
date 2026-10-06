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
    int helper(TreeNode *root, int depth){
        if(!root)return 0;
        int l  = helper(root->left, depth);
        int r = helper(root->right, depth);
        return max(l, r) + 1;
    }
public:
    int maxDepth(TreeNode* root) {
        return helper(root, 0);
    }
};
