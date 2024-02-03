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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr)
            return nullptr;
            
        while (head && head->val == val)
            head = head->next;

        ListNode* ans = head;

        while (head && head->next){
            while (head->next && head->next->val == val)
                head->next = head->next->next;
            
            head = head->next;
        }

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};