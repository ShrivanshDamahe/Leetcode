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
    pair<int, int> DFS(TreeNode* node, int& ans) {
        if (!node->left && !node->right){
            ans++;
            return {node->val, 1};
        }

        pair<int, int> p1, p2 = {0, 0};
        if (node->left)
            p1 = DFS(node->left, ans);
        if (node->right)
            p2 = DFS(node->right, ans);

        int sum = p1.first + p2.first + node->val;
        int count = p1.second + p2.second + 1;

        if (sum / count == node->val)
            ans++;

        return {sum, count};
    }

public:
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        DFS(root, ans);
        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
    // where, h - height of tree
};