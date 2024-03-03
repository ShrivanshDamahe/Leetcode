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
    void inOrderTraversal(TreeNode* root, vector<int>& dp) {
        if (!root)
            return;

        inOrderTraversal(root->left, dp);
        dp.push_back(root->val);
        inOrderTraversal(root->right, dp);
    }

public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> dp;

        inOrderTraversal(root, dp);

        int itr1 = 0, itr2 = dp.size() - 1;
        while (itr1 < itr2){
            if (dp[itr1] + dp[itr2] == k)
                return true;
            else if (dp[itr1] + dp[itr2] > k)
                itr2--;
            else 
                itr1++;
        }

        return false;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};