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
    int ans = 0;

    void BinToDec(string& s) {
        int temp = s.length();

        for (int i = 0; i < s.length(); i++){
            temp--;

            if (s[i])
                ans += (s[i] - '0') * pow(2, temp);
        }
    }

    void DFS(TreeNode* curr, string s) {
        if (!curr)
            return;
        
        s += to_string(curr->val);

        if (!curr->left && !curr->right){
            BinToDec(s);
            return;
        }

        DFS(curr->left, s);
        DFS(curr->right, s);
    }

public:
    int sumRootToLeaf(TreeNode* root) {
        DFS(root, "");
        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(h)
    // where, h - height of tree
};