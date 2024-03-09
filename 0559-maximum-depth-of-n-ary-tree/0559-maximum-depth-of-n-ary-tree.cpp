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
public:
    int maxDepth(Node* root) {
        if (!root)
            return 0;

        queue<Node*> dp;
        dp.push(root);
        int level = 0;

        while (!dp.empty()){
            level++;
            int size = dp.size();

            for (int i = 0; i < size; i++){
                Node* curr = dp.front();
                dp.pop();

                for (auto& temp : curr->children)
                    dp.push(temp);
            }
        }

        return level;
    }
    // Time complexity - O(n)
    // Space complexity - O(w)
    // where, w - max width of tree
};