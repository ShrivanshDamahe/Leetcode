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
    int widthOfBinaryTree(TreeNode* root) {
        long long ans = 1;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 1});

        while (q.size()){
            long long left, right;
            long long temp = q.front().second;
            int size = q.size();

            for (int i = 0; i < size; i++){
                TreeNode* curr = q.front().first;
                long long srNo = q.front().second - temp;

                if (i == 0)
                    left = srNo;
                if (i == size - 1)
                    right = srNo;

                if (curr->left)
                    q.push({curr->left, srNo*2 - 1});
                if (curr->right)
                    q.push({curr->right, srNo*2});

                q.pop();
            }

            ans = max(ans, right - left + 1);
        }

        return static_cast<int>(ans);
    }
    // Time compelxity - O(n)
    // Space compelxity - O(n)
};