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
    void dfs(TreeNode* curr, unordered_map<int, int>& freq) {
        if (!curr)
            return;

        freq[curr->val]++;

        dfs(curr->left, freq);
        dfs(curr->right, freq);
    }

    vector<int> findMode(TreeNode* root) {
        int max_freq = INT_MIN;
        vector<int> ans;
        unordered_map<int, int> freq;

        dfs(root, freq);

        for (auto& pair : freq){
            if (pair.second > max_freq){
                max_freq = pair.second;
                ans = {};
                ans.push_back(pair.first);
            }
            else if (pair.second == max_freq)
                ans.push_back(pair.first);
        }

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};