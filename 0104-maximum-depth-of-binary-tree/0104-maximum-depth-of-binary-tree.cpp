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
private:
    int checkDepth(TreeNode* curr, int level) {
        if (!curr)
            return 0;

        return max(level, max(checkDepth(curr->left, level + 1), checkDepth(curr->right, level + 1)));
    }

public:
    int maxDepth(TreeNode* root) {
        return checkDepth(root, 1);
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
};