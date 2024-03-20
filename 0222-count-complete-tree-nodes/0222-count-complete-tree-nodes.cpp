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
    int height(TreeNode* node) {
        int ans = 0;

        while (node){
            ans++;
            node = node->left;
        }

        return ans;
    }

public:
    int countNodes(TreeNode* root) {
        if (!root)
            return 0;

        int l = height(root->left);
        int r = height(root->right);

        if (l == r)
            return (1 << l) + countNodes(root->right);
        return (1 << r) + countNodes(root->left);
    }
    // Time complexity - O(log n * log n)
    // Space complexity - O(h)
    // where, h - height of tree
};