/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    vector<int> ans;
    void traversal(Node* root) {
        if (root){
            for (auto& curr : root->children)
                postorder(curr);
                
            ans.push_back(root->val);
        }
    }

public:
    vector<int> postorder(Node* root) {
        traversal(root);

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};