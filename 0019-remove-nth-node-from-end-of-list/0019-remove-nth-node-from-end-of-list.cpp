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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == nullptr)
            return nullptr;
            
        ListNode* ans = head;
        ListNode* temp = head;

        while (n >= 1){
            temp = temp->next;
            n--;
        }

        if (temp == nullptr)
            return head->next;

        while (temp->next){
            head = head->next;
            temp = temp->next;
        }

        head->next = head->next->next;

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};