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
    int check(TreeNode* temp, int h) {
        if (!temp)
            return 0;

        int left = check(temp->left, h);
        int right = check(temp->right, h);

        if (left == -1 || right == -1 || abs(left - right) > 1)
            return -1;

        return 1 + max(left, right);
    }

public:
    bool isBalanced(TreeNode* root) {
        return (check(root, 0) != -1);
    }
    // Time complexity - O(n)
    // Space complexity - O(log n)  - average case
    //                  - O(n)      - worst case
};