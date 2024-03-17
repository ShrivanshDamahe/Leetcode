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
    bool check(TreeNode* curr, TreeNode* subRoot) {
        if (!curr && !subRoot)
            return true;
        else if (!curr || !subRoot)
            return false;
        else if (curr->val == subRoot->val)
            return check(curr->left, subRoot->left) && check(curr->right, subRoot->right);
        return false;
    }

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root)
            return false;

        if (root->val == subRoot->val && check(root, subRoot))
            return true;

        if (isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot))
            return true;

        return false;
    }
    // Time complexity - O(m * n)
    // Space complecity - O(m + n)
    // where,  m - number of nodes in root
    //         n - number of nodes in subRoot
};