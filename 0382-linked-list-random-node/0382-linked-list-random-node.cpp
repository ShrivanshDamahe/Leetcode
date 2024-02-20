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
private: 
    ListNode* head;
    int len = 0;

public:
    Solution(ListNode* head) {
        this->head = head;
        while (head){
            head = head->next;
            len++;
        }
    }
    
    int getRandom() {
        ListNode* curr = head;
        int temp = rand() % len;

        while (temp){
            curr = curr->next;
            temp--;
        }

        return curr->val;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */