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
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        if (!root)
            return ans;
        else if (root->left && !root->left->left && !root->left->right)
            return root->left->val + ((root->right) ? sumOfLeftLeaves(root->right) : 0);

        if (root->left)
            ans += sumOfLeftLeaves(root->left);
        if (root->right)
            ans += sumOfLeftLeaves(root->right);

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
    // where, h - height of tree
};