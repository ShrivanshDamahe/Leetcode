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
    queue<TreeNode*> dp;
public:
    bool isEvenOddTree(TreeNode* root) {
        int level = 0;
        dp.push(root);

        while (!dp.empty()){
            int size = dp.size();
            int prev = ((level % 2 == 0) ? INT_MIN : INT_MAX);

            for (int i = 0; i < size; i++){
                TreeNode* curr = dp.front();
                if ((level % 2 == 0 && (curr->val % 2 == 0 || curr->val <= prev)) || 
                    (level % 2 == 1 && (curr->val % 2 == 1 || curr->val >= prev))){
                    return false;
                }

                if (curr->left)
                    dp.push(curr->left);
                if (curr->right)
                    dp.push(curr->right);

                prev = curr->val;
                dp.pop();
            }

            level++;
        }
        
        return true;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};