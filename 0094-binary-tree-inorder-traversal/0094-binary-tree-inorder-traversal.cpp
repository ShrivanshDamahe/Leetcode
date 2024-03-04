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
    void inOrderTraversal(TreeNode* curr, vector<int>& ans) {
        if (!curr)
            return;

        inOrderTraversal(curr->left, ans);
        ans.push_back(curr->val);
        inOrderTraversal(curr->right, ans);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;

        inOrderTraversal(root, ans);
        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};