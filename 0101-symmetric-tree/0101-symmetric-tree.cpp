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
// private:
//     bool check(TreeNode* l, TreeNode* r) {
//         if (!l && !r)
//             return true;
//         else if (!l || !r)
//             return false;
//         else if (l->val == r->val)
//             return check(l->left, r->right) && check(l->right, r->left);
//         return false;
//     }

public:
    // bool isSymmetric(TreeNode* root) {
    //     return check(root->left, root->right);
    // }
    // Time complexity - O(n)
    // Space complexity - O(h)
    // where, h - height of tree

    bool isSymmetric(TreeNode* root) {
        queue<pair<TreeNode*, TreeNode*>> box;
        box.push({root->left, root->right});

        while (!box.empty()){
            int temp = box.size();
            while (temp--){
                pair<TreeNode*, TreeNode*> set = box.front();
                box.pop();

                if (!set.first && !set.second)
                    continue;
                else if (!set.first || !set.second)
                    return false;
                else if (set.first->val == set.second->val){
                    box.push({set.first->left, set.second->right});
                    box.push({set.first->right, set.second->left});
                }
                else 
                    return false;
            }
        }

        return true;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};