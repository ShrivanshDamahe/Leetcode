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
// private:
//     TreeNode* ans;

public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2)
            return nullptr;

        TreeNode* ans = new TreeNode((root1 ? root1->val : 0) + (root2 ? root2->val : 0));

        if (root1 && root2)
            ans->left = mergeTrees(root1->left, root2->left);
        else if (root1)
            ans->left = mergeTrees(root1->left, nullptr);
        else if (root2)
            ans->left = mergeTrees(nullptr, root2->left);
        else 
            ans->left = nullptr;

        if (root1 && root2)
            ans->right = mergeTrees(root1->right, root2->right);
        else if (root1)
            ans->right = mergeTrees(root1->right, nullptr);
        else if (root2)
            ans->right = mergeTrees(nullptr, root2->right);
        else 
            ans->right = nullptr;

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};