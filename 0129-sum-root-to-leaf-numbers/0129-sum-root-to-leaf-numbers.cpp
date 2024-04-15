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
    void DFS(TreeNode* node, int& ans, int sum) {
        if (!node->left && !node->right){
            ans += (sum * 10) + node->val;
            return;
        }

        sum = sum * 10 + node->val;

        if (node->left)
            DFS(node->left, ans, sum);
        if (node->right)
            DFS(node->right, ans, sum);
    }

public:
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        DFS(root, ans, 0);
        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
    // where, h - height of tree
};