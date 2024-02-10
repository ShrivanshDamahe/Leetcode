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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> dp;
        stack<int> s;

        while (head){
            dp.push_back(head->val);
            head = head->next;
        }

        for (int i = 0; i < dp.size(); i++){
            if (s.empty())
                s.push(i);
            else {
                while (!s.empty() && dp[i] > dp[s.top()]){
                    dp[s.top()] = dp[i];
                    s.pop();
                }

                s.push(i);
            }
        }

        while (!s.empty()){
            dp[s.top()] = 0;
            s.pop();
        }

        return dp;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};