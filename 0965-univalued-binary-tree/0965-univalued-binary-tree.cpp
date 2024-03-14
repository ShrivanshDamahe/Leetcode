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
    bool isUnivalTree(TreeNode* root) {
        if (!root->left && !root->right)
            return true;
        
        if ((root->left && root->val != root->left->val) || 
            (root->right && root->val != root->right->val))
            return false;

        return (((root->left) ? isUnivalTree(root->left) : true) && 
                ((root->right) ? isUnivalTree(root->right) : true));
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
    // where, h - height of tree
};