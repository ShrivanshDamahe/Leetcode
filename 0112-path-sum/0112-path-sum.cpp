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
    bool DFS(TreeNode* curr, int target, int sum) {
        sum += curr->val;

        if (!curr->left && !curr->right)
            return (sum == target);
            
        return (((curr->left) ? DFS(curr->left, target, sum) : false) || 
                ((curr->right) ? DFS(curr->right, target, sum) : false));
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root)
            return false;

        return DFS(root, targetSum, 0);
    }
};