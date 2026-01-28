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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (!head || !head->next || left == right)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        ListNode* curr = prev->next;
        ListNode* subhead = curr;
        ListNode* pr = nullptr;

        int k = right - left + 1;

        while (k) {
            ListNode* next = curr->next;
            curr->next = pr;
            pr = curr;
            curr = next;
            k--;
        }
        
        prev->next = pr;
        subhead->next = curr;

        return dummy->next;
    }
};