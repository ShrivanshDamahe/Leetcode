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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* start = new ListNode(0);
        ListNode* temp = start;

        while (head && head->next){
            ListNode* first = head;
            ListNode* second = head->next;

            head = head->next->next;
            temp->next = second;
            second->next = first;
            first->next = head;

            temp = first;
        }

        return start->next;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};