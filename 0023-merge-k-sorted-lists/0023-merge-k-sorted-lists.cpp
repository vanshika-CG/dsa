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
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                temp->next = l1;
                l1 = l1->next;
            } else {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }

        if (l1)
            temp->next = l1;
        if (l2)
            temp->next = l2;

        return dummy->next;
    }

    ListNode* divide(vector<ListNode*>& lists, int l, int r) {
        if (l > r)
            return nullptr;

        if (l == r)
            return lists[l];

        int mid = l + (r - l) / 2;

        // right
        ListNode* right = divide(lists, mid + 1, r);

        // left
        ListNode* left = divide(lists, l, mid);

        return merge(left, right);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty())
            return nullptr;

        return divide(lists, 0, lists.size() - 1);
    }
};