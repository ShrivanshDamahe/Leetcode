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
    int temp = INT_MIN;
    int diameter(TreeNode* curr, int height) {
        if (!curr) return 0;
        
        int left = diameter(curr->left, height);
        int right = diameter(curr->right, height);

        temp = max(temp, left + right);
        
        return 1 + max(left, right);
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        diameter(root, 0);
        return temp;
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
    // where, h - height of tree
};