/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        int len = 1;
        ListNode* curr = head;

        while (curr && curr->next){
            len++;
            curr = curr->next;
        }
        curr->next = head;

        k %= len;
        len -= k;

        for (int i = 0; i < len; i++)
            curr = curr->next;

        head = curr->next;
        curr->next = nullptr;
        return head;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};