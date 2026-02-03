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
        ListNode* temp = head;
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;

        while (temp) {
            if (temp->val < x) {
                ans->next = new ListNode(temp->val);
                ans = ans->next;
            }
            temp = temp->next;
        }
        temp = head;

        while (temp) {
            if (temp->val >= x) {
                ans->next = new ListNode(temp->val);
                ans = ans->next;
            }
            temp = temp->next;
        }
        return dummy->next;
    }
};