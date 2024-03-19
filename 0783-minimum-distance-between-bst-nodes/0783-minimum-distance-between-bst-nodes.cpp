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
    int minDiffInBST(TreeNode* root) {
        if (!root->left && !root->right) 
            return INT_MAX;

        int ans = INT_MAX;

        if (root->left){
            TreeNode* temp = root->left;
            while (temp->right)
                temp = temp->right;

            ans = min(minDiffInBST(root->left), min(ans, (root->val - temp->val)));
        }

        if (root->right){
            TreeNode* temp = root->right;
            while (temp->left)
                temp = temp->left;

            ans = min(minDiffInBST(root->right), min(ans, (temp->val - root->val)));
        }

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
    // where, h - height of tree
};