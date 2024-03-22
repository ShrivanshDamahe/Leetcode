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
    vector<string> ans;

    void inorderTraversal(TreeNode* curr, string s) {
        if (!curr->left && !curr->right){
            ans.push_back(s + "->" + to_string(curr->val));
            return;
        }

        if (s != "")
            s += "->";
        s += to_string(curr->val);

        if (curr->left) inorderTraversal(curr->left, s);
        if (curr->right) inorderTraversal(curr->right, s);
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if (!root->left && !root->right)
            return {to_string(root->val)};

        inorderTraversal(root, "");
        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};