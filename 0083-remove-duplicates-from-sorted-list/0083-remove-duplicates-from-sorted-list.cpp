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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ans = head;

        while (head){
            ListNode* prev = head;
            int temp = head->val;
            head = head->next;

            while (head && head->val == temp){
                head = head->next;
            }

            prev->next = head;
        }

        return ans;
    }
    // Time compelxity - O(n)
    // Space complexity - O(1)
};