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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        stack<int> dp1, dp2;

        while (l1 || l2){
            if (l1){
                dp1.push(l1->val);
                l1 = l1->next;
            }

            if (l2){
                dp2.push(l2->val);
                l2 = l2->next;
            }
        }

        ListNode* ans = nullptr;
        while (!dp1.empty() || !dp2.empty() || carry){
            int sum = (!dp1.empty() ? dp1.top() : 0) + (!dp2.empty() ? dp2.top() : 0) + carry;
            carry = sum / 10;

            if (!dp1.empty()) dp1.pop();
            if (!dp2.empty()) dp2.pop();

            ListNode* temp = new ListNode(sum % 10);
            temp->next = ans;
            ans = temp;
        }

        return ans;
    }
    // Time complexity - O(max(m, n))
    // Space complexity - O(max(m, n))
};