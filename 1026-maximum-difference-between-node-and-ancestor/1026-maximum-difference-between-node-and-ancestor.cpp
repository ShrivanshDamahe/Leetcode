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
    int ans = 0;

    void DNF(TreeNode* node, int minval, int maxval) {
        if (!node)
            return;

        ans = max(ans, max(abs(minval - node->val), abs(maxval - node->val)));

        minval = min(minval, node->val);
        maxval = max(maxval, node->val);

        DNF(node->left, minval, maxval);
        DNF(node->right, minval, maxval);
    }

    int maxAncestorDiff(TreeNode* root) {
        int minval = root->val, maxval = root->val;

        DNF(root, minval, maxval);

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
};