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
    void invert (TreeNode* curr) {
        if (!curr->left && !curr->right)
            return;
        else if (curr->left && curr->right){
            TreeNode* temp = curr->left;
            curr->left = curr->right;
            curr->right = temp;

            invert(curr->right);
            invert(curr->left);
        }
        else {
            if (curr->left){
                curr->right = curr->left;
                curr->left = nullptr;
                invert(curr->right);
            }
            else {
                curr->left = curr->right;
                curr->right = nullptr;
                invert(curr->left);
            }
        }
    }

public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return root;

        invert(root);
        return root;
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
    // where, h - height of tree
};