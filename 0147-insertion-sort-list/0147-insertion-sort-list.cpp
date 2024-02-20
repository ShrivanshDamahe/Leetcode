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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* ans = new ListNode(head->val);
        head = head->next;

        while (head){
            ListNode* itr = ans;
            while (itr){
                if (head->val < itr->val){
                    ListNode* temp1 = new ListNode(head->val);
                    temp1->next = itr;
                    ans = temp1;
                    break;
                }
                else if (head->val == itr->val || (itr->next && head->val > itr->val && head->val < itr->next->val)){
                    ListNode* temp1 = new ListNode(head->val);
                    ListNode* temp2 = itr->next;

                    itr->next = temp1;
                    temp1->next = temp2;
                    break;
                }
                else if (!(itr->next) && head->val >= itr->val){
                    ListNode* temp1 = new ListNode(head->val);
                    itr->next = temp1;
                    break;
                }

                itr = itr->next;
            }

            head = head->next;
        }

        return ans;
    }
    // Time complexity - O(n^2)
    // Space complexity - O(n)
};