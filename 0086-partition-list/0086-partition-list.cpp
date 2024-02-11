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
    ListNode* partition(ListNode* head, int x) {
        ListNode* first = new ListNode(0);
        ListNode* temp1 = first;
        ListNode* second = new ListNode(0);
        ListNode* temp2 = second;

        while (head){
            while (head && head->val < x){
                temp1->next = head;
                temp1 = temp1->next;
                head = head->next;
            }

            while (head && head->val >= x){
                temp2->next = head;
                temp2 = temp2->next;
                head = head->next;
            }
        }
        temp1->next = nullptr;
        temp2->next = nullptr;
        temp1->next = second->next;

        return first->next;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};