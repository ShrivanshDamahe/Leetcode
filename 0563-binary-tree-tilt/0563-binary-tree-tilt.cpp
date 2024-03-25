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
    int setTilt(TreeNode* curr) {
        int temp = curr->val;

        if (!curr->left && !curr->right){
            curr->val = 0;
            return temp;
        }

        int lsum = (curr->left) ? setTilt(curr->left) : 0;
        int rsum = (curr->right) ? setTilt(curr->right) : 0;

        curr->val = abs(lsum - rsum);

        return (temp + lsum + rsum);
    }

    int nodeSum(TreeNode* curr) {
        if (!curr)
            return 0;

        return (curr->val + nodeSum(curr->left) + nodeSum(curr->right));
    }

public:
    int findTilt(TreeNode* root) {
        if (!root)
            return 0;

        setTilt(root);
        return nodeSum(root);
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
    // where, h - height of tree
};