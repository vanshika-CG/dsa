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
        if (!head)
            return nullptr;
        if (!head->next)
            return head;

        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        ListNode* curr = head;
        ListNode* next = head->next;

        while (next) {
            if (curr->val == next->val) {
                while (next && curr->val == next->val) {
                    next = next->next;
                }

                prev->next = next;
                curr = next;

                if (curr)
                    next = curr->next;

            } else {
                prev = curr;
                curr = next;
                next = curr->next;
            }
        }
        return dummy.next;
    }
};