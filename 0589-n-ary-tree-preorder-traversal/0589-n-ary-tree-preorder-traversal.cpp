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
    void traversal(Node*& curr) {
        if (!curr)
            return;

        ans.push_back(curr->val);
        for (auto& itr : curr->children)
            traversal(itr);
    }
    
public:
    vector<int> preorder(Node* root) {
        traversal(root);

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};