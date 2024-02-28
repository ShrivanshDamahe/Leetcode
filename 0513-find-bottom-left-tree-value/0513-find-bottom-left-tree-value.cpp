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
    pair<int, int> lastLeft = {0, 0};
    void bottomLeft(TreeNode* temp, int level) {
        if (!temp)
            return;

        if (level > lastLeft.second){
            lastLeft.first = temp->val;
            lastLeft.second = level;
        }

        if (temp->left)
            bottomLeft(temp->left, level + 1);

        if (temp->right)
            bottomLeft(temp->right, level + 1);
    }

public:
    int findBottomLeftValue(TreeNode* root) {
        bottomLeft(root, 1);
        return lastLeft.first;
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
    // where, h - height of the tree
};