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
    void DFS(TreeNode* node, int& ans, int maxVal) {
        if (!node)
            return;

        if (node->val >= maxVal)
            ans++;

        DFS(node->left, ans, max(maxVal, node->val));
        DFS(node->right, ans, max(maxVal, node->val));
    }

public:
    int goodNodes(TreeNode* root) {
        int ans = 0;
        DFS(root, ans, INT_MIN);
        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
    // where, h - height of tree
};