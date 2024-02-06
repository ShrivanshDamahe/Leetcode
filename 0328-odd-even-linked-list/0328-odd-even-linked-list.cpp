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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* oddTail = head;
        ListNode* evenTail = head->next;
        ListNode* mid = evenTail;

        while (evenTail && evenTail->next){
            oddTail->next = evenTail->next;
            oddTail = oddTail->next;

            evenTail->next = oddTail->next;
            evenTail = evenTail->next;
        }
        oddTail->next = mid;

        return head;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};