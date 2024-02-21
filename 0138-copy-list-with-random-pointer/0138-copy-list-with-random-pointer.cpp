/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head)
            return head;
        
        Node* curr = head;

        while (curr){
            Node* temp = new Node(curr->val);
            temp->next = curr->next;
            curr->next = temp;
            curr = temp->next;
        }

        curr = head;
        while (curr){
            Node* temp = curr->next;
            if (curr->random){
                temp->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        curr = head;
        Node* ans = head->next;
        Node* temp = ans;

        while (curr){
            curr->next = curr->next->next;
            curr = curr->next;

            if (curr){
                temp->next = temp->next->next;
                temp = temp->next;
            }
        }

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};